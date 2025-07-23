/*find simple intrest*/
#include <stdio.h>
int main()
{
    float p, r, t, si;
    printf("Enter the principal amount (p): ");
    scanf("%f", &p);
    printf("Enter the rate of interest (r): ");
    scanf("%f", &r);
    printf("Enter the time period in years (t): ");
    scanf("%f", &t);
    
    si = (p * r * t) / 100;
    
    printf("The simple interest (si) is: %.2f\n", si);
    return 0;
}