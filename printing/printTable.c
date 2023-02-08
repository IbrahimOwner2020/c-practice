#include <stdio.h>

// print a multiplication table
int main()
{
    int num, mult;
    printf("Enter a number: ");
    scanf("%d", &num);
    printf("Multiplication table of %d is: \n", num);
    for (mult = 1; mult <= 12; mult++)
    {
        printf("%d x %d = %d\n", num, mult, num * mult);
    }

    return 0;
}