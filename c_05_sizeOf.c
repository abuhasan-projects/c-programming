#include <stdio.h>

int main() {
    printf("C Size Of \n");
    int i;
    float f;
    double d;
    char c;
    printf("Size of integer = %d\n", sizeof(i));
    printf("Size of float = %d\n", sizeof(f));
    printf("Size of double = %d\n", sizeof(d));
    printf("Size of char = %d\n", sizeof(c));

    return 0;
}