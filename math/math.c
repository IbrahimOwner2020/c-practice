#include <math.h>
#include <stdio.h>
#include <stdlib.h>

int main()
{
    // square root
    printf("The squareRoot of 25 = %f\n", sqrt(25));

    // Round up
    // ceil() function returns the smallest integer value that is greater than or equal to the argument.
    printf("The ceil of 2.3 = %f\n", ceil(2.3));

    // floor() function returns the largest integer value that is less than or equal to the argument.
    printf("The floor of 3.8 = %f\n", floor(3.8));

    // pow() function returns the value of the first argument raised to the power of the second argument.
    printf("The pow of 2^3 = %f\n", pow(2, 3));

    // abs() function returns the absolute value of the argument.
    printf("The abs of -5 = %d\n", abs(-5));

    // sin() function returns the sine of the argument.
    printf("The sin of 0 = %f\n", sin(30));

    // cos() function returns the cosine of the argument.
    printf("The cos of 0 = %f\n", cos(30));

    // tan() function returns the tangent of the argument.
    printf("The tan of 0 = %f\n", tan(30));

    // log() function returns the natural logarithm of the argument.
    printf("The log of 2 = %f\n", log(2));

    // log10() function returns the base-10 logarithm of the argument.
    printf("The log10 of 2 = %f\n", log10(2));

    // exp() function returns the value of e raised to the power of the argument.
    printf("The exp of 2 = %f\n", exp(2));

    // fmod() function returns the floating-point remainder of the division operation x/y.
    printf("The fmod of 14/5 = %f\n", fmod(14, 5));

    return 0;
}