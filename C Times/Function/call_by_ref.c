#include <stdio.h>

// Function prototype with call by reference
void addTenRef(int *x);

int main() {
    int num = 5;

    // Function call with call by reference
    addTenRef(&num);

    // The value of 'num' is modified because the function works with its address
    printf("Modified value of num: %d\n", num);

    return 0;
}

void addTenRef(int *x) {
    *x = *x + 10;
    printf("Inside function, *x = %d\n", *x);
}
