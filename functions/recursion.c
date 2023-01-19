#include <stdio.h>

// The process of a function calling itself is called recursion.

int sum(int n);

int main() {
    int result = sum(10);

    printf("The sum is: %d", result);
    return 0;
}

int sum(int n) {
    if (n > 0) {
        return n + sum(n - 1);
    } else {
        return n;
    }
}