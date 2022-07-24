#include <stdio.h>

int main() {
    printf("Tow Sum\n");

    int nums[] = {2, 7, 11, 15};
    int target = 17;
    int numsSize = sizeof nums / sizeof nums[0];


    for (int i = 0; i < numsSize; i++) {
        for (int j = i + 1; j < numsSize; j++) {
            if (nums[i] + nums[j] == target) {
                printf("i = %d, j = %d\n", i, j);
                int ele[] = {i, j};
                return ele;
            } else {
                printf("not found %d  this is i=%d & j=%d\n", nums[i] + nums[j], i, j);
            }
        }
    }

    return 0;
}