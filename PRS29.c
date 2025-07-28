/*give even and odd factors of a given number with while loop*/
#include <stdio.h>
int main() {
    int n, i = 1;

    printf("Enter a positive integer: ");
    scanf("%d", &n);

    if (n < 1) {
        printf("Please enter a positive integer.\n");
        return 1;
    }

    printf("Even factors of %d are: ", n);
    while (i <= n) {
        if (n % i == 0 && i % 2 == 0) {
            printf("%d ", i);
        }
        i++;
    }
    printf("\n");

    i = 1; // Reset i for odd factors
    printf("Odd factors of %d are: ", n);
    while (i <= n) {
        if (n % i == 0 && i % 2 != 0) {
            printf("%d ", i);
        }
        i++;
    }
    printf("\n");

    return 0;
}