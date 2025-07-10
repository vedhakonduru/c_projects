#include <stdio.h>
int main()
{
    int a,b,c;
    printf("enter two values ");
    scanf("%d%d",&a,&b);
   
    c = a%b;
    printf("the value of remainder is %d",c);

}