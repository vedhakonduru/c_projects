/*c=a^2+b^2+2ab*/
#include <stdio.h>
int main()
{
    int a, b, c;
    printf("Enter the value of a: ");
    scanf("%d", &a);
    printf("Enter the value of b: ");
    scanf("%d", &b);
    
    c = (a * a) + (b * b) + (2 * a * b);
    
    printf("The value of c is: %d\n", c);
    return 0;
}