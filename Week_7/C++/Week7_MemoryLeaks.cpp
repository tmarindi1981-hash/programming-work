#include <iostream>
using namespace std;

void createLeak() {
    int* ptr = new int(42);
    cout << "Inside function. The value is: " << *ptr << endl;
    cout << "Memory allocated at address: " << ptr << endl;
}

int main() {
    cout << "Calling function that leaks memory..." << endl;
    createLeak();
    cout << "Function finished. The memory is now leaked." << endl;
    return 0;
}
