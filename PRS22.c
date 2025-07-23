/*m1, m2, m3 and pass in third class, second class, third class in nested if*/
#include <stdio.h>
int main() {
    int m1, m2, m3, total;
    printf("Enter marks for three subjects out of 100: ");
    scanf("%d %d %d", &m1, &m2, &m3);
    
    total = m1 + m2 + m3;
    printf("Total marks: %d\n", total);

    if ((total >= 200)&&(total <= 300)) {
        printf("Grade: First Class\n");
    } else if ((total >= 140)&&(total < 200))  {
        printf("Grade: Second Class\n");
    } else if ((total <= 50)&& (total > 140)) {
        printf("Grade: Third Class\n");
    } else {
        printf("Grade: Fail\n");
    }
    return 0;
}