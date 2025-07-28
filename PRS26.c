/*enumeration in choice of months in a year*/
#include <stdio.h>
enum months {January, February, March, April, May, June, July, August, September, October, November, December};
int main() {
    enum months m;
    int month_number;

    printf("Enter the month number (0-11): ");
    scanf("%d", &month_number);

    if (month_number < 0 || month_number > 11) {
        printf("Invalid month number.\n");
        return 1;
    }

    m = month_number;

    switch (m) {
        case January:
            printf("You selected January.\n");
            break;
        case February:
            printf("You selected February.\n");
            break;
        case March:
            printf("You selected March.\n");
            break;
        case April:
            printf("You selected April.\n");
            break;
        case May:
            printf("You selected May.\n");
            break;
        case June:
            printf("You selected June.\n");
            break;
        case July:
            printf("You selected July.\n");
            break;
        case August:
            printf("You selected August.\n");
            break;
        case September:
            printf("You selected September.\n");
            break;
        case October:
            printf("You selected October.\n");
            break;
        case November:
            printf("You selected November.\n");
            break;
        case December:
            printf("You selected December.\n");
            break;
    }

    return 0;
}