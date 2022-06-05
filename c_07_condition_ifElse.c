#include <stdio.h>

int main() {
    printf("C Conditional Statements \n");
    int x = 10;
    int y = 15;
    int z = 20;

    if (x > y) {
        printf("x is greater than y");
    } else if (x + y == z) {
        printf("x + y == z");
    } else {
        printf("x is less than y \n");
    }
    x + y == 26 ? printf("25") : printf("false");

    return 0;
};

