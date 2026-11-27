#include <stdio.h>

int factorialRecursive(int n) {
    if (n <= 1) {
        return 1;
    }
    return n * factorialRecursive(n - 1);
}

int main() {
    int num = 5;
    printf("Factorial of %d is %d\n", num, factorialRecursive(num));
    return 0;
}
