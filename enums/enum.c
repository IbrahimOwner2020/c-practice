#include <stdio.h>

// enum stands for Enumration
// An enum is a special type that represent a group of constants (unchangable values)

// Creating an enum
enum Levels
{
    LOW, // value to 0
    MEDIUM, // value to 1
    HIGH // value to 2
};

int main()
{
    // create an enum variable and assigna value to it
    enum Levels myLevel = HIGH;

    // accessing the enum value
    printf("%d", myLevel);

    return 0;
}