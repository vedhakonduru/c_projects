#include <stdio.h>

int main () 
{
    int n, isprime = 1;

    printf("ENTER A NUMBER : ");
    scanf("%d", &n);

    if (n <= 1) {  
        isprime = 0;
    } else {
        for (int i = 2; i <= n / 2; i++) {
            if (n % i == 0) {
                isprime = 0;
                break;
            }
        }
    }

    if (isprime) {
        printf("%d IS A PRIME NUMBER\n", n);
    } else {
        printf("%d IS NOT A PRIME NUMBER\n", n);
    }

    return 0;  
}
