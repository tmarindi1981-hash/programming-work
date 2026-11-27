#include <iostream>
using namespace std;

int factorialRecursive(int n) {
    if (n <= 1) {
        return 1;
    }
    return n * factorialRecursive(n - 1);
}

int main() {
    int num = 5;
    cout << "Factorial of " << num << " is " << factorialRecursive(num) << endl;
    return 0;
}
