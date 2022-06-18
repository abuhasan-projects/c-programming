

#include <stdio.h>

void myFunction(char name[], int age) {
    printf("Hello %s. You are %d years old.\n", name, age);
};

int returnValFun(int x, int y) {
    return x + y;
}
int sum(int k);

struct Car {
    char brand[50];
    char model[50];
    int year;
};


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



    struct Car car1 = {"BMW", "X5", 1999};
    struct Car car2 = {"Ford", "Mustang", 1969};
    struct Car car3 = {"Toyota", "Corolla", 2011};

    printf("%s %s %d\n", car1.brand, car1.model, car1.year);
    printf("%s %s %d\n", car2.brand, car2.model, car2.year);
    printf("%s %s %d\n", car3.brand, car3.model, car3.year);

    return 0;
}


int sum(int k) {
    if (k > 0) {
        return k + sum(k - 1);
    } else {
        return 0;
    }
}