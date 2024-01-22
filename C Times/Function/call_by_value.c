#include <stdio.h>

void addTen(int x);

int main() {
    int num = 5;
    addTen(num);
    printf("Original value of num: %d\n", num);

    return 0;
}

void addTen(int x) {
    x = x + 10;
    printf("Inside function, x = %d\n", x);
}
