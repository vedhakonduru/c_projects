#include <stdio.h>

int main() {
    int a[100], n, i, key, found = 0;

    printf("Enter size of array: ");
    scanf("%d", &n);

    printf("Enter %d elements:\n", n);
    for(i = 0; i < n; i++) {
        scanf("%d", &a[i]);
    }

    printf("Enter number to search: ");
    scanf("%d", &key);

    for(i = 0; i < n; i++) {
        if(a[i] == key) {
            printf("Number %d found at index %d\n", key, i);
            found = 1;
            break;
        }
    }

    if(found == 0) {
        printf("Number %d not found in array.\n", key);
    }

    return 0;
}
