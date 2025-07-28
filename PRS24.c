/*read a charecter and find if it is capital letter or not */
#include <stdio.h>
int main() {
    char n;
    printf("ENTER THE CHARACTER: ");
    scanf("%c", &n);

    if ((n >= 'A')&& (n <= 'Z'))
    {
       printf("it is a capital letter\n");
             if (n == 'Z')
            { 
                printf("it is the last capital letter\n");
                printf("it is Z\n");
            } 
            else
            {
                printf("it is capital letter but not Z\n");
            }

    }
    else
    {
        printf("it is not a capital letter\n");
    }
    return 0;

}