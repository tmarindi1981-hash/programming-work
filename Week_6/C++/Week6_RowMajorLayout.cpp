#include <iostream>
using namespace std;

int main() {
    int matrix[][10] = {
        {1, 2, 3, 4},
        {5, 6, 7, 8},
        {9, 10, 11, 12}
    };

    cout << "Row-major traversal (row by row):" << endl;
    for (int row = 0; row < 3; row++) {
        for (int col = 0; col < 4; col++) {
            cout << matrix[row][col] << " ";
        }
        cout << endl;
    }

    cout << "\nMemory addresses (each int takes 4 bytes):" << endl;
    for (int row = 0; row < 3; row++) {
        for (int col = 0; col < 4; col++) {
            cout << "matrix[" << row << "][" << col << "] = " << matrix[row][col]
                 << " at address " << &matrix[row][col] << endl;
        }
    }
    return 0;
}
