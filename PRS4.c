/*code for x=b^2-4ac*/
#include<stdio.h>
int main()
{
    int a, b, c, x;
    printf("Enter the values of a, b and c: ");
    scanf("%d%d%d", &a, &b, &c);
    
    x = (b * b) - (4 * a * c);
    printf("The value of x is: %d\n", x);
    
    return 0;
}