#include <stdio.h>
int main(){
    printf("1.show trains right now \n");
    printf("2.cancel a train \n");
    printf("3.exit\n\n\n\n\n\n");


    int choice;
    printf("please enter your choice: ");
    scanf("%d", &choice);
    
    switch (choice){
        case 1:
            printf("ok, here are the trains right now:\n");
            printf("1. gnt to hyd express = 70rs per one person\n");
            printf("2. gnt to mumbai express = 160rs per one person\n");
            printf("3. gnt to delhi express (via hyd) = 200rs per one person\n");
            printf("4. gnt to chennai express = 140rs per one person\n");
            printf("for any more enquries please go to ticket counter taking the slip\n");
            printf("thank you for visiting our train station\n");
            printf("please come again\n");

            break;
        case 2:
            printf("ok, please enter the train name you want to cancel: \n");
            char train_name[50];
            scanf("%s", train_name);
            printf("you have cancelled the train %s\n", train_name);
            break;
        case 3:
            printf("ok, exiting the program\n");
            printf("thank you for visiting our train station\n");
            return 0;
        default:
            printf("invalid choice, please try again\n");
            return 0;

    }
    printf("if any inconveniences with this website report to vedha sarma\n");
    return 0;

}