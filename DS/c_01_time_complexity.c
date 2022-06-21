#include <stdio.h>

int main() {
    printf("C Time Complexity");

    int i, j, n, count;
    scanf("%d", &n);

    count = 0;
    for (i = 0; i < n; i++) {
        for (j = 0; j < n; j++) {
            // count = count + 1;
            count++;
            // printf("%d\n", j);
        }
    }
    printf("n = %d, count = %d \n", n, count);

    return 0;
}