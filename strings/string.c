#include <stdio.h>

int main()
{
    // C does not have a string type, but we can use a char array to store a string
    char greeting[] = "Hello World!";

    // Print the string use the %s format specifier
    printf("%s\n", greeting);

    // Access a character in the string
    printf("The first character is %c\n", greeting[0]);

    // Print the string character by character
    for (int i = 0; i < 11; i++)
    {
        printf("%c\n", greeting[i]);
    }

    // Modify a character in the string
    greeting[0] = 'Y';
    printf("%s\n", greeting);

    // Another way to declare a string
    char greeting2[] = {'H', 'e', 'l', 'l', 'o', ' ', 'W', 'o', 'r', 'l', 'd', '!', '\0'};
    printf("%s", greeting2);

    // Another way to declare a string
    char greeting3[12] = "Hello World!";
    printf("\n%s\n", greeting3);

    // Another way to declare a string
    char *greeting4 = "Hello World!";
    printf("%s\n", greeting4);

    return 0;
}