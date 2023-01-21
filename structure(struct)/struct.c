// Struck is a way of grouping related data together, and it may contain different types of data.
// Struct is like an object in OOP.

#include <stdio.h>

// Create a struct
struct student
{
    char *name;
    int roll;
    float marks;
};

int main()
{
    // Creating a second struct variable
    struct student s1;

    // assign values to the struct
    s1.roll = 1;
    s1.marks = 99.5;
    s1.name = "John";

    // Creating a second struct variable
    struct student s2;

    // assign values to the struct
    s2.roll = 2;
    s2.marks = 98.5;
    s2.name = "Doe";

    // print the values
    printf("First student's ");
    printf("Name: %s\n", s1.name);
    printf("Roll: %d\n", s1.roll);
    printf("Marks: %f\n", s1.marks);

    printf("Second student's ");
    printf("Name: %s\n", s2.name);
    printf("Roll: %d\n", s2.roll);
    printf("Marks: %f\n", s2.marks);

    // Creating and assigning a struct directly
    struct student s3 = {"Jane", 3, 97.5};

    // print the values
    printf("Third student's ");
    printf("Name: %s\n", s3.name);
    printf("Roll: %d\n", s3.roll);
    printf("Marks: %f\n", s3.marks);

    // Copying struct to another struct
    struct student s4 = s3;

    // print the values
    printf("Fourth student's ");
    printf("Name: %s\n", s4.name);
    printf("Roll: %d\n", s4.roll);
    printf("Marks: %f\n", s4.marks);

    // Modify the values of s4
    s4.name = "Jill";
    s4.roll = 4;
    s4.marks = 96.5;

    // print the values
    printf("Fourth student's ");
    printf("Name: %s\n", s4.name);
    printf("Roll: %d\n", s4.roll);
    printf("Marks: %f\n", s4.marks);
    

    return 0;
}