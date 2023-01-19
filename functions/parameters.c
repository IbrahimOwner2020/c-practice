#include <stdio.h>

// Passing one parameter
void myName(char name[])
{
    printf("Hello %s\n", name);
}

// Passing multiple parameters
void myFunction(char name[], int age)
{
    printf("Hello %s, you are %d years old\n", name, age);
}

// Passsing an array as a parameter
void myArray(int array[])
{
    for (int i = 0; i < 5; i++)
    {
        printf("%d\n", array[i]);
    }
}

// Passing a pointer as a parameter
void myPointer(int *array)
{
    for (int i = 0; i < 5; i++)
    {
        printf("%d\n", *(array + i));
    }
}

// Return a value from a function
int mySum(int x, int y)
{
    return x + y;
}

int main()
{
    myName("John");

    myFunction("John", 20);

    int array[5] = {1, 2, 3, 4, 5};
    myArray(array);

    myPointer(array);

    int sum = mySum(5, 3);
    printf("The sum is: %d\n", sum);
    return 0;
}
