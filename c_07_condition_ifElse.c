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
    x + y == 26 ? printf("25") : printf("false \n");

    int day = 4;
    switch (day) {
        case 1:
            printf("Monday");
            break;
        case 2:
            printf("Tuesday");
            break;
        case 3:
            printf("Wednesday");
            break;
        case 4:
            printf("Thursday");
            break;
        case 5:
            printf("Friday");
            break;
        case 6:
            printf("Saturday");
            break;
        case 7:
            printf("Sunday");
            break;
    }

    int i = 0;
    while (i < 5) {
        printf("%d\n", i);
        i++;
    }

    do {
        printf("iss %d\n", i);
        i++;
    }
    while (i < 5);

    for (i = 0; i < 5; i++) {
        printf("%d\n", i);
    }

    return 0;
};

