#include <stdio.h>

int main()
{
    int myNumber[] = {1, 2, 3, 4, 5};

    printf("The first element is %d\n", myNumber[0]);

    // Change an array element
    myNumber[0] = 10;
    printf("The first element is %d\n", myNumber[0]);

    // Looping an array
    for (int i = 0; i < 5; i++)
    {
        printf("The element at index %d is %d\n", i, myNumber[i]);
    }

    // Declaring an array of names with a size and add elements later
    char *names[5];
    names[0] = "John";
    names[1] = "Mary";
    names[2] = "Bob";
    names[3] = "Alice";
    names[4] = "Peter";

    // Looping an array of names
    for (int i = 0; i < 5; i++)
    {
        printf("The name at index %d is %s\n", i, names[i]);
    }

    return 0;
}