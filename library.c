#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <time.h>

#define MAX_BOOKS 1000
#define MAX_USERS 500
#define MAX_BORROWINGS 2000
#define MAX_TITLE 100
#define MAX_AUTHOR 50
#define MAX_USERNAME 50

// Book structure
typedef struct {
    int id;
    char title[MAX_TITLE];
    char author[MAX_AUTHOR];
    char genre[30];
    int year;
    int available;
    int total_copies;
} Book;

// User structure
typedef struct {
    int id;
    char username[MAX_USERNAME];
    char email[100];
    int books_borrowed;
    int max_books_allowed;
} User;

// Borrowing record structure
typedef struct {
    int id;
    int book_id;
    int user_id;
    char borrow_date[20];
    char due_date[20];
    int returned;
} Borrowing;

// Database structure
typedef struct {
    Book books[MAX_BOOKS];
    User users[MAX_USERS];
    Borrowing borrowings[MAX_BORROWINGS];
    int book_count;
    int user_count;
    int borrowing_count;
} Database;

Database db;

// Function prototypes
void initialize_database();
void add_sample_data();
void save_database();
void load_database();
void add_book();
void search_book();
void list_books();
void add_user();
void borrow_book();
void return_book();
void list_users();
void list_borrowings();
void display_menu();
void get_current_date(char* date_str);
void add_days_to_date(char* original_date, char* new_date, int days);

int main() {
    initialize_database();
    load_database();
    
    if (db.book_count == 0) {
        add_sample_data();
    }
    
    int choice;
    
    while (1) {
        display_menu();
        scanf("%d", &choice);
        
        switch (choice) {
            case 1:
                add_book();
                break;
            case 2:
                search_book();
                break;
            case 3:
                list_books();
                break;
            case 4:
                add_user();
                break;
            case 5:
                borrow_book();
                break;
            case 6:
                return_book();
                break;
            case 7:
                list_users();
                break;
            case 8:
                list_borrowings();
                break;
            case 9:
                save_database();
                printf("Database saved successfully!\n");
                printf("Exiting the program. Goodbye!\n");
                return 0;
            default:
                printf("Invalid option. Please try again.\n");
        }
    }
    
    return 0;
}

void initialize_database() {
    db.book_count = 0;
    db.user_count = 0;
    db.borrowing_count = 0;
}

void add_sample_data() {
    // Add sample books
    Book sample_books[] = {
        {1, "The Great Gatsby", "F. Scott Fitzgerald", "Fiction", 1925, 1, 3},
        {2, "To Kill a Mockingbird", "Harper Lee", "Fiction", 1960, 1, 2},
        {3, "1984", "George Orwell", "Fiction", 1949, 1, 4},
        {4, "A Brief History of Time", "Stephen Hawking", "Science", 1988, 1, 2},
        {5, "Clean Code", "Robert C. Martin", "Technology", 2008, 1, 3},
        {6, "C Programming Language", "Brian W. Kernighan", "Technology", 1978, 1, 5},
        {7, "Sapiens", "Yuval Noah Harari", "History", 2011, 1, 2},
        {8, "The Selfish Gene", "Richard Dawkins", "Science", 1976, 1, 1}
    };
    
    for (int i = 0; i < 8; i++) {
        db.books[db.book_count++] = sample_books[i];
    }
    
    // Add sample users
    User sample_users[] = {
        {1, "john_doe", "john@email.com", 0, 5},
        {2, "jane_smith", "jane@email.com", 0, 5},
        {3, "admin", "admin@library.com", 0, 10}
    };
    
    for (int i = 0; i < 3; i++) {
        db.users[db.user_count++] = sample_users[i];
    }
    
    printf("Sample data added to database!\n");
}

void save_database() {
    FILE *file = fopen("library_db.dat", "wb");
    if (file == NULL) {
        printf("Error: Could not save database!\n");
        return;
    }
    
    fwrite(&db, sizeof(Database), 1, file);
    fclose(file);
}

void load_database() {
    FILE *file = fopen("library_db.dat", "rb");
    if (file == NULL) {
        printf("No existing database found. Creating new one...\n");
        return;
    }
    
    fread(&db, sizeof(Database), 1, file);
    fclose(file);
    printf("Database loaded successfully!\n");
}

void display_menu() {
    printf("\n📚 Library Management System Database\n");
    printf("=====================================\n");
    printf("1. Add a book\n");
    printf("2. Search for a book\n");
    printf("3. List all books\n");
    printf("4. Add a user\n");
    printf("5. Borrow a book\n");
    printf("6. Return a book\n");
    printf("7. List all users\n");
    printf("8. List all borrowings\n");
    printf("9. Save and Exit\n");
    printf("Enter your choice: ");
}

void add_book() {
    if (db.book_count >= MAX_BOOKS) {
        printf("Error: Database is full!\n");
        return;
    }
    
    Book new_book;
    new_book.id = db.book_count + 1;
    
    printf("Enter book title: ");
    scanf(" %[^\n]%*c", new_book.title);
    
    printf("Enter author name: ");
    scanf(" %[^\n]%*c", new_book.author);
    
    printf("Enter genre: ");
    scanf(" %[^\n]%*c", new_book.genre);
    
    printf("Enter publication year: ");
    scanf("%d", &new_book.year);
    
    printf("Enter number of copies: ");
    scanf("%d", &new_book.total_copies);
    
    new_book.available = new_book.total_copies;
    
    db.books[db.book_count++] = new_book;
    printf("Book added successfully! ID: %d\n", new_book.id);
}

void search_book() {
    char search_term[MAX_TITLE];
    printf("Enter book title or author to search: ");
    scanf(" %[^\n]%*c", search_term);
    
    printf("\nSearch results:\n");
    printf("ID | Title | Author | Genre | Year | Available/Total\n");
    printf("---|-------|--------|-------|------|----------------\n");
    
    int found = 0;
    for (int i = 0; i < db.book_count; i++) {
        if (strstr(db.books[i].title, search_term) || 
            strstr(db.books[i].author, search_term)) {
            printf("%2d | %-20s | %-15s | %-10s | %4d | %d/%d\n",
                   db.books[i].id,
                   db.books[i].title,
                   db.books[i].author,
                   db.books[i].genre,
                   db.books[i].year,
                   db.books[i].available,
                   db.books[i].total_copies);
            found = 1;
        }
    }
    
    if (!found) {
        printf("No books found matching '%s'\n", search_term);
    }
}

void list_books() {
    printf("\nAll Books in Library:\n");
    printf("ID | Title | Author | Genre | Year | Available/Total\n");
    printf("---|-------|--------|-------|------|----------------\n");
    
    for (int i = 0; i < db.book_count; i++) {
        printf("%2d | %-20s | %-15s | %-10s | %4d | %d/%d\n",
               db.books[i].id,
               db.books[i].title,
               db.books[i].author,
               db.books[i].genre,
               db.books[i].year,
               db.books[i].available,
               db.books[i].total_copies);
    }
}

void add_user() {
    if (db.user_count >= MAX_USERS) {
        printf("Error: User database is full!\n");
        return;
    }
    
    User new_user;
    new_user.id = db.user_count + 1;
    
    printf("Enter username: ");
    scanf(" %[^\n]%*c", new_user.username);
    
    printf("Enter email: ");
    scanf(" %[^\n]%*c", new_user.email);
    
    new_user.books_borrowed = 0;
    new_user.max_books_allowed = 5;
    
    db.users[db.user_count++] = new_user;
    printf("User added successfully! ID: %d\n", new_user.id);
}

void borrow_book() {
    int book_id, user_id;
    
    printf("Enter book ID: ");
    scanf("%d", &book_id);
    
    printf("Enter user ID: ");
    scanf("%d", &user_id);
    
    // Find book
    Book *book = NULL;
    for (int i = 0; i < db.book_count; i++) {
        if (db.books[i].id == book_id) {
            book = &db.books[i];
            break;
        }
    }
    
    // Find user
    User *user = NULL;
    for (int i = 0; i < db.user_count; i++) {
        if (db.users[i].id == user_id) {
            user = &db.users[i];
            break;
        }
    }
    
    if (!book) {
        printf("Error: Book not found!\n");
        return;
    }
    
    if (!user) {
        printf("Error: User not found!\n");
        return;
    }
    
    if (book->available <= 0) {
        printf("Error: No copies available!\n");
        return;
    }
    
    if (user->books_borrowed >= user->max_books_allowed) {
        printf("Error: User has reached maximum borrowing limit!\n");
        return;
    }
    
    // Create borrowing record
    Borrowing new_borrowing;
    new_borrowing.id = db.borrowing_count + 1;
    new_borrowing.book_id = book_id;
    new_borrowing.user_id = user_id;
    new_borrowing.returned = 0;
    
    get_current_date(new_borrowing.borrow_date);
    add_days_to_date(new_borrowing.borrow_date, new_borrowing.due_date, 14);
    
    db.borrowings[db.borrowing_count++] = new_borrowing;
    
    // Update book and user
    book->available--;
    user->books_borrowed++;
    
    printf("Book borrowed successfully!\n");
    printf("Due date: %s\n", new_borrowing.due_date);
}

void return_book() {
    int borrowing_id;
    
    printf("Enter borrowing ID: ");
    scanf("%d", &borrowing_id);
    
    // Find borrowing
    Borrowing *borrowing = NULL;
    for (int i = 0; i < db.borrowing_count; i++) {
        if (db.borrowings[i].id == borrowing_id && !db.borrowings[i].returned) {
            borrowing = &db.borrowings[i];
            break;
        }
    }
    
    if (!borrowing) {
        printf("Error: Borrowing record not found or already returned!\n");
        return;
    }
    
    // Update borrowing
    borrowing->returned = 1;
    
    // Update book
    for (int i = 0; i < db.book_count; i++) {
        if (db.books[i].id == borrowing->book_id) {
            db.books[i].available++;
            break;
        }
    }
    
    // Update user
    for (int i = 0; i < db.user_count; i++) {
        if (db.users[i].id == borrowing->user_id) {
            db.users[i].books_borrowed--;
            break;
        }
    }
    
    printf("Book returned successfully!\n");
}

void list_users() {
    printf("\nAll Users:\n");
    printf("ID | Username | Email | Books Borrowed/Max\n");
    printf("---|----------|-------|-------------------\n");
    
    for (int i = 0; i < db.user_count; i++) {
        printf("%2d | %-10s | %-20s | %d/%d\n",
               db.users[i].id,
               db.users[i].username,
               db.users[i].email,
               db.users[i].books_borrowed,
               db.users[i].max_books_allowed);
    }
}

void list_borrowings() {
    printf("\nAll Borrowings:\n");
    printf("ID | Book ID | User ID | Borrow Date | Due Date | Returned\n");
    printf("---|---------|---------|-------------|----------|---------\n");
    
    for (int i = 0; i < db.borrowing_count; i++) {
        printf("%2d | %7d | %7d | %11s | %9s | %s\n",
               db.borrowings[i].id,
               db.borrowings[i].book_id,
               db.borrowings[i].user_id,
               db.borrowings[i].borrow_date,
               db.borrowings[i].due_date,
               db.borrowings[i].returned ? "Yes" : "No");
    }
}

void get_current_date(char* date_str) {
    time_t now = time(NULL);
    struct tm *t = localtime(&now);
    sprintf(date_str, "%04d-%02d-%02d", t->tm_year + 1900, t->tm_mon + 1, t->tm_mday);
}

void add_days_to_date(char* original_date, char* new_date, int days) {
    // Simple date addition (assumes 30 days per month for simplicity)
    int year, month, day;
    sscanf(original_date, "%d-%d-%d", &year, &month, &day);
    
    day += days;
    while (day > 30) {
        day -= 30;
        month++;
        if (month > 12) {
            month = 1;
            year++;
        }
    }
    
    sprintf(new_date, "%04d-%02d-%02d", year, month, day);
}

