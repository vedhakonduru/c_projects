/*to find perimeter of a squre */
#include <stdio.h>
int main()
{
    int side, perimeter ;
    printf("enter the side of a squre");
    scanf("%d ",&side);

    perimeter = 4 * side;
    printf("the perimeter of squre is %d",perimeter);
    return 0;
    
}