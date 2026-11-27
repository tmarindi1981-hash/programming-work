#include <iostream>
#include <cstring>
using namespace std;

int main() {
    char name[100];
    cout << "Enter your name: ";
    cin.getline(name, 50);

    cout << "Name: " << name << endl;
    cout << "Length: " << strlen(name) << endl;
    cout << "First character: " << name << endl;

    char copy[100];
    strcpy(copy, name);
    cout << "Copy: " << copy << endl;
    return 0;
}
