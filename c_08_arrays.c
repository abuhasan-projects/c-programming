#include <stdio.h>

int main() {
    printf("C array\n");

    const int SIZE;
    int myNumbers[] = {25, 50, 75, 100, 50};
    int size = sizeof(myNumbers) / sizeof(myNumbers[0]);

    printf("%d \n", myNumbers[0]);

    myNumbers[0] = 33;

    printf("Change array element: %d --- Array length/size: %d \n", myNumbers[0], size);

    int i;
    for(i = 0; i < size; i++){
        printf("Loop through array %d \n", myNumbers[i]);
    }


    char greetings[] = "Hello World!";
    printf("%c \n", greetings[0]);

    greetings[0] = 'J';
    printf("%s \n", greetings);

    char greetings1[] = {'H', 'e', 'l', 'l', 'o', ' ', 'W', 'o', 'r', 'l', 'd', '!', '\0'};
    printf("Array to string: %s \n", greetings1);

    char greetings3[] = {'H', 'e', 'l', 'l', 'o', ' ', 'W', 'o', 'r', 'l', 'd', '!', '\0'};
    char greetings2[] = "Hello World!";

    printf("%lu\n", sizeof(greetings3));   // Outputs 13
    printf("%lu\n", sizeof(greetings2));

    int myAge = 43;
    printf("%p", &myAge);

    return 0;
}