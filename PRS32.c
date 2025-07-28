/*find if given number is a prime number or not by counting factors in nested if*/
#include <stdio.h>
int main() {
    int n, i = 1, total_factors = 0;

    printf("Enter a positive integer: ");
    scanf("%d", &n);

    if (n < 1) {
        printf("Please enter a positive integer.\n");
        return 1;
    }

    while (i <= n) {
        if (n % i == 0) {
            total_factors++; // Count total factors
        }
        i++;
    }

    if (total_factors == 2) {
        printf("%d is a prime number.\n", n);
    } else {
        printf("%d is not a prime number.\n", n);
    }

    return 0;
}