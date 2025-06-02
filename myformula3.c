#include <stdio.h>

void main()
{
    int a;
    int b;
    scanf("%d,%d", &a, &b);
    float add = a + b;
    float sub = a - b;
    float mul = a * b;
    float divi = a / b;

    printf("addition:%f,subtraction:%f,multiplication:%f,division:%f", add, sub, mul, divi);
}