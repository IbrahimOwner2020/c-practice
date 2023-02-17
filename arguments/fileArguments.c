// pass argeuments from command line

#include <stdio.h>

int main(int argc, char *argv[])
{
    // Print the number of arguments
    printf("Number of arguments: %d\n", argc - 1);

    // Print each argument
    for (int i = 1; i < argc; i++)
    {
        printf("argv[%d]: %s\n", i, argv[i]);
    }
}