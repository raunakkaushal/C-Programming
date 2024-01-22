#include <stdio.h>

void addNumbers(int num1, int num2);

int main() {
    int a = 5, b = 7;
    addNumbers(a, b);
    return 0;
}
void addNumbers(int num1, int num2) {
    int sum = num1 + num2;
    printf("Sum: %d\n", sum);
}
