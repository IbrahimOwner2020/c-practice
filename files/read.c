#include <stdio.h>
#include <stdlib.h> // for exit()

int main()
{
    FILE *fptr;

    fptr = fopen("test.txt", "r");


    if (fptr != NULL)
    {
        printf("File opened successfully\n");
        printf("File contents:\n");

        // Read file contents
        char c[1000];
        fgets(c, 1000, fptr);
        printf("%s", c);
    }
    else
    {
        printf("File opening failed\n");
        exit(1);
    }

    fclose(fptr);

    return 0;
}