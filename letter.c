#include <stdio.h>

int main() {
    char name[100];
    char reason[500];

    printf("ENTER YOUR NAME:  ");
    fgets(name, sizeof(name), stdin);  // reads name

    printf("WRITE YOUR REASON FOR LEAVE:  ");
    fgets(reason, sizeof(reason), stdin);  // reads reason

    printf("\nTo\n");
    printf("The Principal / Manager,\n");
    printf("[Your Institution or Company Name]\n");
    printf("[Location]\n\n");

    printf("Subject: Request for Leave\n\n");

    printf("Respected Sir/Madam,\n\n");

    printf("I am %s", name);
    printf("and I kindly request leave due to %s", reason);
    printf("I would be grateful if you could grant me leave for [mention number of days] starting from [start date] to [end date].\n\n");
    printf("I assure you that I will complete any pending tasks at the earliest convenience.\n\n");
    printf("Thank you for your understanding and support.\n\n");
    printf("Sincerely,\n");
    printf("%s", name);

    return 0;
}
