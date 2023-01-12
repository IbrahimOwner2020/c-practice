#include <stdio.h>

int main()
{
    int myNumber[2][3] = {{1, 2, 3}, {4, 5, 6}};

    printf("The first element is %d\n", myNumber[1][1]);

    // Change an array element
    myNumber[0][0] = 10;
    printf("The first element is %d\n", myNumber[0][0]);

    // Looping an array
    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            printf("The element at index %d, %d is %d\n", i, j, myNumber[i][j]);
        }
    }

    return 0;
}