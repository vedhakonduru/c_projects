#include <stdio.h>
#include <string.h>

int main() {
    int choice;
    char bookname[100];
    char searchBook[100];

    while (1) {
        printf("\n📚 Welcome to the Library Management System\n");
        printf("This program will help you manage your library effectively.\n");

        printf("\nPlease choose an option:\n");
        printf("1. Add a book\n");
        printf("2. Search for a book\n");
        printf("3. List all books\n");
        printf("4. Exit\n");

        scanf("%d", &choice);   
        printf("You chose option %d\n", choice);
        
        switch (choice) {
            case 1:
                printf("Adding a book...\n");
                printf("Give the name of your book:\n");
                scanf(" %[^\n]%*c", searchBook);

                printf("Book '%s' added successfully!\n", bookname);
                break;

            case 2:
                printf("Searching for a book...\n");
                printf("Enter the name of the book to search:\n");
                scanf(" %[^\n]", searchBook);
                printf("Book '%s' found in the library!\n", searchBook);
                printf("You can get the book in second row of 4th rack.\n");
                printf("Please go to the librarian to borrow it.\n");
                break;

            case 3: {
                int genre_choice;

                while (1) {
                    printf("\nAvailable genres:\n");          
                    printf("1. Educational Books\n");
                    printf("2. Fiction Books\n");
                    printf("3. Science Books\n");
                    printf("4. History Books\n");
                    printf("5. Technology Books\n");
                    printf("6. Go back to main menu\n");
                    printf("Enter genre number: ");
                    scanf("%d", &genre_choice);

                    switch (genre_choice) {
                        case 1:
                            printf("\nEducational Books:\n");
                            printf("1. Mathematics for Class 10\n2. Physics for Class 12\n3. Chemistry for Class 11\n4. Biology for Class 10\n5. Computer Science for Class 12\n");
                            break;
                        case 2:
                            printf("\nFiction Books:\n");
                            printf("1. The Great Gatsby\n2. To Kill a Mockingbird\n3. 1984\n4. The Catcher in the Rye\n5. Pride and Prejudice\n6. The Lord of the Rings\n");
                            break;
                        case 3:
                            printf("\nScience Books:\n");
                            printf("1. A Brief History of Time\n2. The Selfish Gene\n3. The Origin of Species\n4. The Double Helix\n5. The God Delusion\n");
                            break;
                        case 4:
                            printf("\nHistory Books:\n");
                            printf("1. Sapiens\n2. Guns, Germs, and Steel\n3. The Silk Roads\n4. The Diary of a Young Girl\n5. The Rise and Fall of the Third Reich\n");
                            break;
                        case 5:
                            printf("\nTechnology Books:\n");
                            printf("1. The Innovators\n2. Clean Code\n3. Pragmatic Programmer\n4. C Programming Language\n5. AI: A Modern Approach\n");
                            break;
                        case 6:
                            printf("Returning to main menu...\n");
                            break;
                        default:
                            printf("Invalid genre option.\n");
                    }

                    if (genre_choice == 6) {
                        break;  // Exit genre loop
                    }
                }
                break;
            }

            case 4:
                printf("Exiting the program. Goodbye!\n");
                return 0;  // Exit main loop and program

            default:
                printf("Invalid option. Please try again.\n");
        }
    }

    return 0;
}

