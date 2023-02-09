// A programs that reads a file and counts the number of lines in it

#include <stdio.h>

int main()
{
    // open the file
    FILE *file = fopen("example.txt", "r");

    // check if the file is opened
    if (file == NULL)
    {
        printf("Error opening file");
        return 1;
    }

    // read content of the file and count the number of lines
    int lines = 0;
    char c;
    while ((c = fgetc(file)) != EOF)
    {
        if (c == '\n')
        {
            lines++;
        }
        printf("%c", c);
    }

    printf("%c", c);

    // Check if the last line is empty
    if (c != '\n' && c != '\0')
    {
        lines++;
    }

    // print the number of lines
    printf("\n The number of lines is: %d", lines);

    // close the file
    fclose(file);
    return 0;
}