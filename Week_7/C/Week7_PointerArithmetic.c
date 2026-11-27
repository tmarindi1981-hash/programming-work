#include <stdio.h>

int main() {
    int numbers[] = {10, 20, 30, 40, 50};
    int *ptr = numbers;

    printf("Array elements accessed via pointer arithmetic:\n");
    for (int i = 0; i < 5; i++) {
        printf("Value: %d\n", *ptr);
        ptr++;
    }

    ptr = numbers;
    printf("\nAccessing using offset arithmetic:\n");
    for (int i = 0; i < 5; i++) {
        printf("Index %d has value: %d\n", i, *(ptr + i));
    }

    return 0;
}
