/*e=mc^2*/
#include <stdio.h>
int main()
{
    int e, m, c;
    printf("Enter the value of mass (m): ");
    scanf("%d", &m);
    printf("Enter the value of speed of light (c): ");
    scanf("%d", &c);
    e = m * c * c;
    printf("The energy (e) is: %d\n", e);
    return 0;
}