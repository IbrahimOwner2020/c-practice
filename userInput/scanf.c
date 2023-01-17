#include <stdio.h>

int main()
{
    int myNum;
    printf("Enter a number: ");
    scanf("%d", &myNum);
    printf("You entered: %d\n", myNum);

    // Using space in scanf
    char fullName[20];

    // Note: scanf will stop reading when it encounters a space
    printf("Enter your full name: ");
    scanf("%s", fullName);
    printf("Your name is: %s\n", fullName);

    // Solving the problem of scanf stopping at space
    char fullName2[20];
    return 0;
}