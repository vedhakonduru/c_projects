/*read marks and find weather the student passed or not */\
#include <stdio.h>
int main() {
    int marks;
    printf("enter the number of marks ");
    scanf("%d",&marks);
    (marks >=35)?printf("student passed\n"):printf("student failed\n");
    return 0;
}
