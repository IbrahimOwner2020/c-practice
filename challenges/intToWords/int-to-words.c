#include <stdio.h>

void printNum(int num)
{
    // check if the number is in the supported range
    if (num < 0 || num > 999999999)
    {
        printf("Number not yet supported.");
        return;
    }

    char *ones[] = {"", "one", "two", "three", "four", "five", "six", "seven", "eight", "nine"};
    char *teens[] = {"ten", "eleven", "twelve", "thirteen", "fourteen", "fifteen", "sixteen", "seventeen", "eighteen", "nineteen"};
    char *tens[] = {"", "", "twenty", "thirty", "fourty", "fifty", "sixty", "seventy", "eighty", "ninety"};

    // Number is zero
    if (num == 0)
    {
        printf("zero");
        return;
    }

    // Number is between 10 and 19
    if (num >= 10 && num <= 19)
    {
        printf("%s", teens[num - 10]);
        return;
    }

    // Number is between 20 and 99
    if (num >= 20 && num <= 99)
    {
        printf("%s", tens[num / 10]);
        if (num % 10 != 0)
        {
            printf(" ");
            printNum(num % 10);
        }
        return;
    }

    // hundreds
    if (num >= 100 && num <= 999)
    {
        printNum(num / 100);
        printf(" hundred");
        if (num % 100 != 0)
        {
            printf(" and ");
            printNum(num % 100);
        }
        return;
    }

    // thousands
    if (num >= 1000 && num <= 999999)
    {
        printNum(num / 1000);
        printf(" thousand");
        if (num % 1000 != 0)
        {
            printf(" ");
            printNum(num % 1000);
        }
        return;
    }

    // millions
    if (num >= 1000000 && num <= 999999999)
    {
        printNum(num / 1000000);
        printf(" million");
        if (num % 1000000 != 0)
        {
            printf(" ");
            printNum(num % 1000000);
        }
        return;
    }

    // ones
    printf("%s", ones[num]);
}

int main()
{
    int num;
    printf("Enter a number between 1 - 9: ");
    scanf("%d", &num);

    printNum(num);

    return 0;
}