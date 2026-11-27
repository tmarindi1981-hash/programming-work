#include <stdio.h>
#include <stdlib.h>

void createLeak() {
    int *ptr = (int*)malloc(sizeof(int));
    if (ptr == NULL) {
        printf("Memory allocation failed!\n");
        return;
    }
    *ptr = 42;
    printf("Inside function. The value is: %d\n", *ptr);
    printf("Memory allocated at address: %p\n", (void*)ptr);
}

int main() {
    printf("Calling function that leaks memory...\n");
    createLeak();
    printf("Function finished. The memory is now leaked.\n");
    return 0;
}
