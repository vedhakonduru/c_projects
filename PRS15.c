/*example for shift left*/
#include <stdio.h>
int main() {
    int a = 5;  // 0000 0101 in binary
    int b = 2;  // Shift amount

    // Left shift
    int left_shift_result = a << b;  // 0001 0100 in binary, which is 20 in decimal
    printf("Left shift of %d by %d is: %d\n", a, b, left_shift_result);

    // Right shift
    int right_shift_result = a >> b; // 0000 0001 in binary, which is 1 in decimal
    printf("Right shift of %d by %d is: %d\n", a, b, right_shift_result);

    return 0;
}