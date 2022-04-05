#include <stdio.h>

int main() {

    int dividend = 25;
    int divisor = 9;

    int dividable =  dividend / divisor;

    int dividable2 = divisor * dividable;

    int remainder = dividend - dividable2;

    printf("The Remainder is: %d", remainder);



    return 0;
}