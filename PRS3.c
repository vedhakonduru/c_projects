/*to find perimeter of a rectangle*/
#include <stdio.h>
int main()
{
    int length, breadth , perimeter;
    printf("enter the values of length and breadth of rectangle ");
    scanf("%d%d" &length , &breadth);
    
    perimeter = 2 * (length + breadth);
    printf("perimeter of given rectangle is %d", perimeter);
    return 0;
}