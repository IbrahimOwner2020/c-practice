// the different between union and struct in c
#include <stdio.h>

union unionJob
{
    // defining a union
    char name[32];
    float salary;
    int workerNo;
} uJob;

struct structJob
{
    // defining a struct
    char name[32];
    float salary;
    int workerNo;
} sJob;

int main()
{
    printf("size of union = %lu bytes", sizeof(uJob));
    printf("\nsize of struct = %lu bytes", sizeof(sJob));

    return 0;
}