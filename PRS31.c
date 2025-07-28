/*count odd, even , total factors of a given number with help of while loop*/
#include <stdio.h>
int main() {
    int n, i = 1, total_factors = 0, odd_factors = 0, even_factors = 0;

    printf("Enter a positive integer: ");
    scanf("%d", &n);

    if (n < 1) {
        printf("Please enter a positive integer.\n");
        return 1;
    }

    while (i <= n) {
        if (n % i == 0) {
            total_factors++; // Count total factors
            if (i % 2 == 0) {
                even_factors++; // Count even factors
            } else {
                odd_factors++; // Count odd factors
            }
        }
        i++;
    }

    printf("Total factors of %d: %d\n", n, total_factors);
    printf("Even factors of %d: %d\n", n, even_factors);
    printf("Odd factors of %d: %d\n", n, odd_factors);

    return 0;
}