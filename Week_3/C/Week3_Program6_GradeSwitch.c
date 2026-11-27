#include <stdio.h>

int main() {
    char grade;
    printf("Enter your grade (A, B, C, D, F): ");
    scanf(" %c", &grade);

    switch (grade) {
        case 'A':
        case 'a':
            printf("Excellent! 90-100%%\n");
            break;
        case 'B':
        case 'b':
            printf("Good! 80-89%%\n");
            break;
        case 'C':
        case 'c':
            printf("Satisfactory! 70-79%%\n");
            break;
        case 'D':
        case 'd':
            printf("Passing! 60-69%%\n");
            break;
        case 'F':
        case 'f':
            printf("Failing. Please retake.\n");
            break;
        default:
            printf("Invalid grade entered!\n");
            break;
    }
    return 0;
}
