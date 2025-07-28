/*find if prime number by multiplying the factors is the same numberin nested if*/
#include <stdio.h>
int main() {
    int n, i = 1, product = 1;

    printf("Enter a positive integer: ");
    scanf("%d", &n);

    if (n < 1) {
        printf("Please enter a positive integer.\n");
        return 1;
    }

    while (i <= n) {
        if (n % i == 0) {
            product *= i; // Multiply the factors
        }
        i++;
    }

    if (product == n) {
        printf("%d is a prime number.\n", n);
    } else {
        printf("%d is not a prime number.\n", n);
    }

    return 0;
}