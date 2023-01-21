#include <stdio.h>

// Create a struct
struct car
{
    char *model;
    char *brand;
    int year;
};

int main()
{
    struct car car1 = {"Civic", "Honda", 2019};
    struct car car2 = {"Corolla", "Toyota", 2018};
    struct car car3 = {"Cruze", "Chevrolet", 2017};

    // print the values
    printf("First car: name: %s, brand: %s, year: %d\n", car1.model, car1.brand, car1.year);
    printf("Second car: name: %s, brand: %s, year: %d\n", car2.model, car2.brand, car2.year);
    printf("Third car: name: %s, brand: %s, year: %d\n", car3.model, car3.brand, car3.year);

    return 0;
}