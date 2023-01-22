#include <stdio.h>

enum Level
{
    low = 1,
    medium,
    high
};

int main()
{
    enum Level myVal = high;

    switch (myVal)
    {
    case 1:
        printf("This is the lower level");
        break;
    case 2:
        printf("This is the middle level");
        break;
    case 3:
        printf("This is the highest level");
        break;
    default:
        printf("The level is undefined");
        break;
    }

    return 0;
}