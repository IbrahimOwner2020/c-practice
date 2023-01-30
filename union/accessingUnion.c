#include <stdio.h>

union job {
    float salary;
    int workerNo;
} j;

int main() {
    j.salary = 12.3;
    j.workerNo = 100;

    printf("Salary = %.1f\n", j.salary);
    printf("Worker No = %d", j.workerNo);

    return 0;
}