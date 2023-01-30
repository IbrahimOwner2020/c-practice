#include <stdio.h>

// A union is the same as a struct, except that all members share the same memory. (And it can hold only one member at a time.)

// A union is useful when you want to store different data types in the same memory location. This allows you to save memory space by using the same memory location for multiple-purpose variables.

// Creating a union
union car
{
    int year;
    char *make;
    char *model;
};

// another way of declaring a union variable
union bike
{
    int year;
    char *make;
    char *model;
} bike1, bike2;

int main()
{
    // Declaring a union variable
    union car car1, car2;

    return 0;
}