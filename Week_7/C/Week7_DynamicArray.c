#include <stdio.h>
#include <stdlib.h>

typedef struct {
    int *data;
    int size;
    int capacity;
} DynamicArray;

void initArray(DynamicArray *arr, int initialCapacity) {
    arr->capacity = initialCapacity;
    arr->size = 0;
    arr->data = (int*)malloc(arr->capacity * sizeof(int));
    if (arr->data == NULL) {
        printf("Failed to allocate memory.\n");
        exit(1);
    }
}

void freeArray(DynamicArray *arr) {
    free(arr->data);
    arr->data = NULL;
    arr->size = 0;
    arr->capacity = 0;
}

void push_back(DynamicArray *arr, int value) {
    if (arr->size == arr->capacity) {
        int newCapacity = arr->capacity * 2;
        int *newData = (int*)realloc(arr->data, newCapacity * sizeof(int));
        if (newData == NULL) {
            printf("Reallocation failed!\n");
            return;
        }
        arr->data = newData;
        printf("[Resized capacity from %d to %d]\n", arr->capacity, newCapacity);
        arr->capacity = newCapacity;
    }
    arr->data[arr->size] = value;
    arr->size++;
}

void display(DynamicArray *arr) {
    printf("Array (Size: %d, Capacity: %d): ", arr->size, arr->capacity);
    for (int i = 0; i < arr->size; i++) {
        printf("%d ", arr->data[i]);
    }
    printf("\n");
}

int main() {
    DynamicArray myArray;
    initArray(&myArray, 2);
    printf("Created dynamic array with capacity 2.\n");

    push_back(&myArray, 10);
    push_back(&myArray, 20);
    display(&myArray);

    printf("\nAdding third element...\n");
    push_back(&myArray, 30);
    display(&myArray);

    printf("\nAdding fourth and fifth elements...\n");
    push_back(&myArray, 40);
    push_back(&myArray, 50);
    display(&myArray);

    freeArray(&myArray);
    return 0;
}
