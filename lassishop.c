#include <stdio.h>
int main() {
    printf("welcome to vedha's lassishop\n");
    printf("here is our menu:\n");
    printf("1. lassisweet - 20rs\n");
    printf("2. lassisalty - 25rs\n");
    printf("3. lassimango - 30rs\n");
    printf("4. oreomilkshake - 35rs\n");
    printf("5. lemonade - 15rs\n");
    printf("6. chocolate milkshake - 40rs\n");


    int choice;
    printf("please enter your choice: ");
    scanf("%d", &choice);
    

   
    int price = 0;

switch (choice) {
    case 1:
        printf("you have ordered lassisweet\n");
        price = 20;
        break;
    case 2:
        printf("you have ordered lassisalty\n");
        price = 25;
        break;
    case 3:
        printf("you have ordered lassimango\n");
        price = 30;
        break;
    case 4:
        printf("you have ordered oreomilkshake\n");
        price = 35;
        break;
    case 5:
        printf("you have ordered lemonade\n");
        price = 15;
        break;
    case 6:
        printf("you have ordered chocolate milkshake\n");
        price = 40;
        break;
    default:
        printf("invalid choice\n");
        return 0;
}

printf("your total amount is ₹%d\n", price);
printf("thank you for visiting vedha's lassishop\n");
return 0;
}