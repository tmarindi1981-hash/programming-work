#include <iostream>
using namespace std;

int main() {
    int numbers[] = {10, 20, 30, 40, 50};
    int* ptr = numbers;

    cout << "Array elements accessed via pointer arithmetic:" << endl;
    for (int i = 0; i < 5; i++) {
        cout << "Value: " << *ptr << endl;
        ptr++;
    }

    ptr = numbers;
    cout << "\nAccessing using offset arithmetic:" << endl;
    for (int i = 0; i < 5; i++) {
        cout << "Index " << i << " has value: " << *(ptr + i) << endl;
    }
    return 0;
}
