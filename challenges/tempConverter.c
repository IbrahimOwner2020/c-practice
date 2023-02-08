// A program that take a start point and end point and a step size of a temperature in celious and then converts it to fahrenheit and desplay its output

#include <stdio.h>

int toFarenheit(int celious)
{
    return (celious * 9 / 5) + 32;
}

int main()
{
    int start, end, step;
    printf("Enter the start temperature: ");
    scanf("%d", &start);
    printf("Enter the end temperature: ");
    scanf("%d", &end);
    printf("Enter the step size: ");
    scanf("%d", &step);

    printf("Celious \t Farenheit: \n");
    for (int i = start; i <= end; i += step)
    {
        printf("%dC \t\t %df\n", i, toFarenheit(i));
    }

    return 0;
}