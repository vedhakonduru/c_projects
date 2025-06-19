#include <stdio.h>
#include <windows.h>
int main() {
    printf("please enter your pin number to access your account\n");
    int pin;
    printf("enter your 4 digit pin number: ");
    scanf("%d", &pin);

    if (pin != 9225);
    {
        printf("you entered wrong pin number\n");
        printf("please try again\n");
        return 0;
    }   
    printf("you entered correct pin number\n");
    printf("please wait while we are accessing your account details\n");
    Sleep(2000);
    printf("\n");
    printf("welcome to your account handle of ABD bank\n");
    printf("please select one option in this website:");
    printf("\n1. Check balance");
    printf("\n2. book a debit card");
    printf("\n3. Apply for a loan");
    printf("\n4. deactivate debit card");
    printf("\n5. apply a credit card");
    printf("\n6. know about branches in your area");
    printf("\n7. exit");

    
    int option;
    printf("\nEnter your option: ");
    scanf("%d", &option);

    switch (option) {
        case 1:
            printf("you chose to check th balence in your account\n");
            printf("your bank account number is  123456789\n");
            printf("your current balance is 98,85,470\n");
            printf("thank you for using our service\n");
            break;

        case 2:
            printf("you chose to book a debit card online\n");
            printf("your request is being processed in by our team............\n");
            Sleep(5000);
            printf("your debit card will be delivered to your address in 3-5 working days\n");
            printf("thank you for using our service\n");
            break;

        case 3:
            printf("you choose to apply for loan\n");
            printf("contact bank officials to get more details about loan its still not available online");
            printf("we will notify to your phone when its ready");
            printf("thank you");
            break;

        case 4:
            printf("you choose to deactivate your debit card\n");
            printf("your debit card '123456789' is being deactivated............\n");
            Sleep(5000);
            printf("your debit card is deactivated successfully\n");
            printf("thank you for using our service\n");
            break;
        
        case 5:
            printf("you choose to apply for a credit card\n");
            printf("your credit card limit will be 1,00,000\n");
            printf("your request is being processed by our team............\n");
            Sleep(5000);
            printf("we will notify you when your credit card is ready\n");
            printf("thank you for using our service\n");
            break;

        case 6:
            printf("you choose to know about branches in your area\n");
            printf("guntur has many branches.\n");
            printf("1. ABD Bank Main Branch, Guntur\n");
            printf("2. ABD Bank Guntur East Branch,brodipet\n");
            printf("3. ABD Bank Guntur West Branch,arundalpet\n");
            printf("4. ABD Bank Guntur South Branch,lakshmipuram\n");
            printf("for more details, please visit our website or contact customer service\n");
            printf("thank you for using our service\n");
            break;

        case 7:
            printf("you chose to exit the service\n");
            printf("thank you for using our service\n");
            break;  
        default:
            printf("Invalid option selected. Please try again.\n");    
    }

    printf("\nThank you for using ABD Bank services. Have a great day!\n");
    return 0;
}
