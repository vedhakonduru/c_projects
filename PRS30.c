/*find sum of all the factors , all the odd factors , all even factors of 
a given number n with help of while loop*/
#include <stdio.h>
int main() {
    int n, i = 1, sum = 0, odd_sum = 0, even_sum = 0;

    printf("Enter a positive integer: ");
    scanf("%d", &n);

    if (n < 1) {
        printf("Please enter a positive integer.\n");
        return 1;
    }

    while (i <= n) {
        if (n % i == 0) {
            sum += i; // Add to total sum of factors
            if (i % 2 == 0) {
                even_sum += i; // Add to even factors sum
            } else {
                odd_sum += i; // Add to odd factors sum
            }
        }
        i++;
    }

    printf("Sum of all factors of %d is: %d\n", n, sum);
    printf("Sum of even factors of %d is: %d\n", n, even_sum);
    printf("Sum of odd factors of %d is: %d\n", n, odd_sum);

    return 0;
}