/*find the biggest of three values */
#include <stdio.h>
int main() {
    int a, b, c;
    printf("Enter three integers: ");
    scanf("%d %d %d", &a, &b, &c);
    
    if (a >= b && a >= c) {
        printf("The biggest number is: %d\n", a);
    } else if (b >= a && b >= c) {
        printf("The biggest number is: %d\n", b);
    } else {
        printf("The biggest number is: %d\n", c);
    }
    return 0;
}