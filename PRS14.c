/*example for bitwise operator*/
#include <stdio.h>
int main() {
    int a = 5;  
    // Bitwise AND
    int and_result = a & b;  // 0001 in binary, which is 1 in decimal
    printf("Bitwise AND of %d and %d is: %d\n", a, b, and_result);

    // Bitwise OR
    int or_result = a | b;   // 0111 in binary, which is 7 in decimal
    printf("Bitwise OR of %d and %d is: %d\n", a, b, or_result);


    return 0;
}