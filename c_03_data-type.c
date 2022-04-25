#include <stdio.h>

int main(){
    printf("C Data Type\n");

    //Basic Data Type
    /****
     * int	    2 or 4 bytes	Stores whole numbers, without decimals
     * float	4 bytes	Stores  fractional numbers, containing one or more decimals. Sufficient for storing 7 decimal digits
     * double	8 bytes	Stores  fractional numbers, containing one or more decimals. Sufficient for storing 15 decimal digits
     * char	    1 byte	Stores  a single character/letter/number, or ASCII values
     ****/

    double myDoubleNum = 19.99;  // Double (floating point number)
    printf("%lf\n", myDoubleNum);

    return 0;
}