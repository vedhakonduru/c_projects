/*example of preincrementation*/
#include <stdio.h>
int main()
{
    int a = 5;
    printf("Initial value of a: %d\n", a);
    
    // Pre-increment
    int b = ++a;
    printf("Value of b after pre-incrementing a: %d\n", b);
    printf("Value of a after pre-incrementing: %d\n", a);
    
    // Pre-decrement
    int c = --a;
    printf("Value of c after pre-decrementing a: %d\n", c);
    printf("Value of a after pre-decrementing: %d\n", a);
    
    return 0;
}