#include <stdio.h>

// Function prototype with call by value
void addTen(int x);

int main() {
    int num = 5;

    addTen(num);

    // The original value of 'num' remains unchanged
    printf("Original value of num: %d\n", num);

    return 0;
}

// Function definition with call by value
void addTen(int x) {
    x = x + 10;
    printf("Inside function, x = %d\n", x);
}
