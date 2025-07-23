/*example of size of operator*/
#include <stdio.h>
int main()
{
    int a;
    float b;
    char c;
    
    printf("Size of int: %zu bytes\n", sizeof(a));
    printf("Size of float: %zu bytes\n", sizeof(b));
    printf("Size of char: %zu bytes\n", sizeof(c));
    
    return 0;
}