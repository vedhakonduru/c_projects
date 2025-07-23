/*example for postincrementation*/
#include <stdio.h>
int main()
{
    int a = 5;
    printf("Initial value of a: %d\n", a);
    
    // Post-increment
    int b = a++;
    printf("Value of b after post-incrementing a: %d\n", b);
    printf("Value of a after post-incrementing: %d\n", a);
    
    // Post-decrement
    int c = a--;
    printf("Value of c after post-decrementing a: %d\n", c);
    printf("Value of a after post-decrementing: %d\n", a);
    
    return 0;
}