#include <stdio.h>

enum Level {
    low = 0, // value is 0
    medium = 50, // value is 50
    high = 100 // value is 100
};

int main() {
    // creating an enum value
    enum Level myVar = high;

    // print the value
    printf("%d", myVar);

    return 0;
}