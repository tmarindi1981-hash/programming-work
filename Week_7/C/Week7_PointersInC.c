#include <stdio.h>

int main() {
    int originalValue = 100;
    int *ptr1 = &originalValue;
    int *ptr2 = &originalValue;

    printf("--- Initial State ---\n");
    printf("originalValue: %d\n", originalValue);
    printf("Value via ptr1: %d\n", *ptr1);

    *ptr1 = 200;
    printf("\n--- After setting *ptr1 = 200 ---\n");
    printf("originalValue: %d\n", originalValue);
    printf("Value via ptr2: %d\n", *ptr2);

    *ptr2 = 300;
    printf("\n--- After setting *ptr2 = 300 ---\n");
    printf("originalValue: %d\n", originalValue);
    printf("Value via ptr1: %d\n", *ptr1);

    int anotherValue = 500;
    ptr1 = &anotherValue;
    printf("\n--- After pointing ptr1 to anotherValue ---\n");
    printf("originalValue: %d\n", originalValue);
    printf("Value via ptr1: %d\n", *ptr1);

    return 0;
}
