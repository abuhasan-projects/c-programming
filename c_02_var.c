#include <stdio.h>

int main() {
    int roll = 120;
    printf("C Variable \n");
    printf("%d\n", roll);

    int myNum = 5;             // Integer (whole number)
    float myFloatNum = 5.99;   // Floating point number
    char myLetter = 'D';       // Character

    // Print variables
    printf("My number is %d, letter is %c & float is %f", myNum, myLetter, myFloatNum);

    //    sum
    int sum_a = 5;
    int sum_b = 6;
    float sum_c = 5.3;

    int sum = sum_a + sum_b;
    printf("\nSum Tow Number %d\n", sum);
    printf("Sum with float num %f\n", sum_a + sum_b + sum_c);

    int x = 5, y = 6, z = 50;
    printf("Multiple Value %d\n", x + y + z);

    int x1, y1, z1;
    x1 = y1 = z1 = 50;
    printf("Same value %d\n", x1 + y1 + z1);


    return 0;
}