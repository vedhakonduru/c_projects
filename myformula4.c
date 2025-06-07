#include <stdio.h>

int main()
{

    int a;
    int b;
    printf("PLEASE ENTER YOUR VALUES AFTER CLICKING ENTER");
    scanf("%d %d", &a, &b);

      for (int k = 1; k <= 10; k++) {
        float x_k = a + (k / 11.0) * (b - a);
        printf("x_%d = %.4f\n", k, x_k);
    }

    return 0;
}
    