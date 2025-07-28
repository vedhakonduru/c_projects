/*find the product of n natural numbers with while loop */
#include <stdio.h>
int main() {
    int n, i = 1;
    long long product = 1; // Use long long to handle large products
    printf("Enter a number: ");
    scanf("%d", &n);
    
    while (i <= n) {
        product *= i;
        i++;
    }
    
    printf("The product of the first %d natural numbers is %lld.\n", n, product);
    
    return 0;
}