#include <stdio.h>

int main() {
    int roll = 15;
    printf("C Variable \n");
    printf("%d", roll);

    int myNum = 5;             // Integer (whole number)
    float myFloatNum = 5.99;   // Floating point number
    char myLetter = 'D';       // Character
    // Print variables
    printf("%d\n", myNum);
    printf("%f\n", myFloatNum);
    printf("%c\n", myLetter);

    printf("My number is %d and my letter is %c", myNum, myLetter);

    return 0;
}