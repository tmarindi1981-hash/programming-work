#include <stdio.h>
#include <string.h>

#define MAX_LEN 50

int main() {
    char colour[MAX_LEN];
    printf("Enter your favourite colour: ");
    fgets(colour, MAX_LEN, stdin);
    colour[strcspn(colour, "\n")] = '\0';
    printf("Your favourite colour is %s.\n", colour);
    return 0;
}
