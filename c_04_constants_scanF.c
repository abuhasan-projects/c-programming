#include <stdio.h>

int main() {
    char num0 = '0';
    int numFile = 4;
    printf("C Constants - %c%d \n", num0, numFile);

    //    const var
    const int firstConstantNum = 726;
    printf("Hello Constant Number %d \n", firstConstantNum);

    int scanNum;
    printf("Please enter an integer : \n");
    scanf("%d", &scanNum);
    printf("Your entered number is: %d\n", scanNum);

    // many input
    int num1, num2;
    float num3;
    printf("Enter numbers : ");
    scanf("%d %d %f", &num1, &num2, &num3);
    printf("Numbers are : %d , %d ,  %.1f \n", num1 , num2, num3);

    char enterName;
    printf("Enter your character : ");
    //read note for reason space
    scanf(" %c", &enterName);
    printf("Your character is %c \n", enterName);

    //    char str[100];
    //    scanf("%[^\n]s",&str);
    //    printf("I know you are %s",str);

    /**
     * =========== Note =============
     * ENTER key press generates a \n, which is a vaild input for %c format specifier.
     * Adding a space before %c tells scanf() to ignore all leading whitespace-like inputs
     * (including that previously stored \n) and read the first non-whitespace character from stdin.
     *
     * As for the case with %d format specifier, it consumes (and ignores) any leading whitespace-like
     * inputs before scanning for numeric inputs, so the second case does not suffer any issues.
     * ***/

    return 0;
}
