/*write a programme to read a number and find weather it is odd and if odd devide is by 5*/
#include <stdio.h>
int main (){
    int n;
    printf("ENTER THE NUMBER:");
    scanf("%d", &n);

    if (n % 2 != 0) {
        printf("The number is odd.\n");
        if (n % 5 == 0) {
            printf("The number is divisible by 5.\n");
        } else {
            printf("The number is odd but not divisible by 5.\n");
        }
    } else {
        printf("The number is even.\n");
    }
    return 0;
}