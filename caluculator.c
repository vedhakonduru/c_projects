#include <stdio.h>

int main() {
    char operator;
    double first, second;

    printf("ENTER THE OPERATOR PLEASE (+, -, *, /): ");
    scanf(" %c", &operator);  // note the space before %c to skip newline

    printf("ENTER THE TWO NUMBERS ONE BY ONE WITHOUT COMMA: ");
    scanf("%lf %lf", &first, &second);

    switch (operator) {
        case '+':
            printf("%lf + %lf = %lf\n", first, second, (first + second));
            break;

        case '-':
            printf("%lf - %lf = %lf\n", first, second, (first - second));
            break;

        case '*':
            printf("%lf * %lf = %lf\n", first, second, (first * second));
            break;

        case '/':
            if (second != 0.0)
                printf("%lf / %lf = %lf\n", first, second, (first / second));
            else
                printf("YOUR DENOMINATOR IS ZERO AND INVALID\n");
            break;

        default:
            printf("PLEASE CHECK THE OPERATOR YOU HAVE TYPED\n");
    }

    return 0;
}
