

#include <stdio.h>

void myFunction(char name[], int age) {
    printf("Hello %s. You are %d years old.\n", name, age);
};

int returnValFun(int x, int y) {
    return x + y;
}
int sum(int k);


int main (){
    printf("C Function \n");
    myFunction("Abu Hasan", 22);
    printf("Result is: %d \n", returnValFun(3, 5));

    int result = sum(10);
    printf("%d \n", result);

    /***
     * ceil()
     * pow()
     * abs(x)
     * acos(x)
     * asin(x)
     * atan(x)
     * cbrt(x)
     * cos(x)
     * exp(x)
     * sin(x)
     * tan(x)
     * ***/
    printf("sqrt: %f ", sqrt(16));

    return 0;
}


int sum(int k) {
    if (k > 0) {
        return k + sum(k - 1);
    } else {
        return 0;
    }
}