#include <stdio.h>
#include <stdlib.h> // for exit()

int main()
{
    FILE *fptr;

    fptr = fopen("testWrite.txt", "w");

    if (fptr != NULL)
    {
        char newText[1000];

        printf("File opened successfully\n");
        printf("Enter text to write to file: ");
        scanf("%s", newText);

        fputs(newText, fptr);
    }
    else
    {
        printf("File opening failed\n");
        exit(1);
    }

    fclose(fptr);

    return 0;
}