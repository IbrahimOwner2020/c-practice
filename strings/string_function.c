// to use string function we must include its header
#include <string.h>
#include <stdio.h>

int main()
{
    char name[20] = "Ninja ";

    // Get string length
    printf("%lu\n", strlen(name));
    printf("%lu\n", sizeof(name));

    // Concatinating (combining) 2 arrays
    char name2[] = "kidibra";

    strcat(name, name2);

    // The result is been stored in the first array
    // Note the size of first string should be enough to handle both strings
    printf("%s\n", name);

    // Copying value of strings
    char name_copy[20];
    strcpy(name_copy, name);
    printf("%s\n", name_copy);

    // Comparing strings
    char string1[] = "Hello";
    char string2[] = "Hello";
    char string3[] = "Hi";

    // If the result is 0, thhey are equal
    printf("%d\n", strcmp(string1, string2));
    printf("%d\n", strcmp(string1, string3));
    return 0;
}