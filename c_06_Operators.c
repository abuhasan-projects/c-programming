#include <stdio.h>

int main() {
    printf("C Operators");

    int cMath10 = 10;
    int cMath20 = 20;
    int cMath2 = 2;
    int cMath5 = 5;
    printf("Just print 45 + 1 with increment = %d \n", ++cMath10 + cMath20 + (cMath20 * cMath2) / cMath2 - cMath5);
    printf("Just %% modulus = %d \n", cMath20 % cMath5);

    cMath10 += 5;
    //similar ====   +=, -=, *=, /=, %=, &=, |=, ^=, >>=, <<=
    printf("Just += use of = %d \n", --cMath10);

    //comparison operator
    //similar ====   ==, !=, >, <, >=, <=,
    printf("is Equal = %d \n" , cMath10 == 15);

    //logical operator
    //similar ====   &&, ||, !,
    printf("is Equal = %d \n" , cMath10 && 15);

    return 0;
};