/*find factors of a number n with while loop*/
#include <stdio.h>
int main()
{
    int n, i = 1;

    printf("Enter a positive integer: ");
    scanf("%d", &n);

    if (n < 1) {
        printf("Please enter a positive integer.\n");
        return 1;
    }

    printf("Factors of %d are: ", n);
    while (i <= n) {
        if (n % i == 0) {
            printf("%d ", i);
        }
        i++;
    }
    printf("\n");

    return 0;
}