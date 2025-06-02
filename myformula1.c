#include <stdio.h>

int main()
{
    int a;
    int b;

    scanf("%d,%d", &a, &b);
    int result = (a + b) * (a + b);

    printf("the answer is %d\n", result);

    return 0;
}