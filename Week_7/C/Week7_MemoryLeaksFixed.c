#include <stdio.h>
#include <stdlib.h>

void fixLeak() {
    int *ptr = (int*)malloc(sizeof(int));
    *ptr = 42;
    printf("Inside fixed function. Value: %d\n", *ptr);
    free(ptr);
    ptr = NULL;
    printf("Memory has been successfully freed.\n");
}

int main() {
    printf("--- Testing the Fix ---\n");
    fixLeak();
    return 0;
}
