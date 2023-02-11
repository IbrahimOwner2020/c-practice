// open a file and find its size in bytes

#include <stdio.h>

int main()
{
    // open the file
    FILE *file = fopen("example.txt", "rb");

    // check if the file is opened
    if (file == NULL)
    {
        printf("Error opening file");
        return 1;
    }

    // move the file pointer to the end of the file
    fseek(file, 0, SEEK_END);

    // get the size of the file in bytes
    long size = ftell(file);

    // print the size of the file
    printf("The size of the file is: %ld bytes", size);

    // close the file
    fclose(file);

    return 0;
}