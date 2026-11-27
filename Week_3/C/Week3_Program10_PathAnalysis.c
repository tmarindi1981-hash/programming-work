#include <stdio.h>

int main() {
    int x = 10, y = 5;

    if (x > 0) {
        if (y > 0) {
            printf("Path A: Both positive\n");
        } else {
            printf("Path B: x positive, y non-positive\n");
        }
    } else {
        if (y > 0) {
            printf("Path C: x non-positive, y positive\n");
        } else {
            printf("Path D: Both non-positive\n");
        }
    }
    return 0;
}
