#include <stdio.h>

int main() {
    printf("C Time Complexity");

//    int i, j, n, count;
//    scanf("%d", &n);
//
//    count = 0;
//    for (i = 0; i < n; i++) {
//        for (j = 0; j < n; j++) {
//            // count = count + 1;
//            count++;
//            // printf("%d\n", j);
//        }
//    }
//    printf("n = %d, count = %d \n", n, count);

//    int n;
//    scanf("%d", &n);
//    //time complexity = o(1) single operation only
//    // space complexity = o(1) single n vale 4 bite
//    if(n % 2 == 0) {
//        printf("%d is event number. \n", n);
//    } else {
//        printf("%d is odd number. \n", n);
//    }


    //time complexity = o(1) single operation only
    // space complexity = o(n) space use depend n vale
    int i, n, even[101];
    for(i = 0; i < 101; i++){
        even[i] = 0;
    }
    for (i = 0; i < 101; i += 2){
        even[i] = 1;
    }
    scanf("%d", &n);
    if(even[n]){
        printf("%d is even number \n", n);
    } else {
        printf("%d is odd number \n", n);
    }

    return 0;
}