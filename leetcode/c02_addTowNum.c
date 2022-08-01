#include <stdio.h>

int main() {
    printf("Add tow numbers\n");

    int l1[] = {1, 2, 3};
    int l1Size = sizeof l1 / sizeof l1[0];

    int l2[] = {1, 2, 3, 4};
    int l2ize = sizeof l2 / sizeof l2[0];

    int i, l1Sum, l2Sum = 0;


    for (i = 0; i < l1Size; i++) {
        l1Sum += l1[i];
    };
    for (i = 0; i < l2ize; i++) {
        l2Sum += l2[i];
    }

    printf("Sum of all elements of array = %d & %d \n", l1Sum, l2Sum);
}
