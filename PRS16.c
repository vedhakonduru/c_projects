/*write a program to find half and double of values*/
#include <stdio.h>
int main() {
    int n, res;
    printf("give the value of n");
    scanf("%d", & n);

    res =n<<1;
    printf("double of %d is %d\n", n, res);
    res = n >> 1;
    printf("half of %d is %d\n", n, res);
    

    return 0;
}