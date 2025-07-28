/*find if prime number by adding the factors and if the result is 1 number more 
than original number by nested if*/
#include <stdio.h>
int main() {
    int n, i = 1, sum = 0;

    printf("Enter a positive integer: ");
    scanf("%d", &n);

    if (n < 1) {
        printf("Please enter a positive integer.\n");
        return 1;
    }

    while (i < n) {
        if (n % i == 0) {
            sum += i; // Add the factors
        }
        i++;
    }

    if (sum + 1 == n) {
        printf("%d is a prime number.\n", n);
    } else {
        printf("%d is not a prime number.\n", n);
    }

    return 0;
}