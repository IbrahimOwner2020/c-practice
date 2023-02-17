#include <stdio.h>
#include <string.h>

int main()
{
    char str[100];
    printf("Enter a string: ");
    scanf("%s", str);

    int len = strlen(str);

    printf("All possible permutations of the string are: \n");

    for (int i = 0; i < len; i++)
    {
        for (int j = i + 1; j < len; j++)
        {
            char temp = str[i];
            str[i] = str[j];
            str[j] = temp;

            printf("%s, \n", str);
        }
    }

    return 0;
}