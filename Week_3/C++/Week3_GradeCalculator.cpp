#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    double score;
    char grade;
    char modifier = ' ';

    cout << "===== GRADE CALCULATOR =====" << endl;
    cout << "Enter percentage score (0-100): ";
    cin >> score;

    if (score < 0 || score > 100) {
        cout << "Invalid score! Must be between 0 and 100." << endl;
        return 1;
    }

    if (score >= 90) {
        grade = 'A';
    } else if (score >= 80) {
        grade = 'B';
    } else if (score >= 70) {
        grade = 'C';
    } else if (score >= 60) {
        grade = 'D';
    } else {
        grade = 'F';
    }

    cout << "Grade: " << grade << endl;
    return 0;
}
