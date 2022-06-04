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

    return 0;
}
