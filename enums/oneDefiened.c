#include <stdio.h>

enum Level
{
    low = 10, //value = 10
    medium, // value = 11
    high // value = 12
};

int main()
{
    enum Level myLev = high;

    printf("%d", myLev);

    return 0;
}