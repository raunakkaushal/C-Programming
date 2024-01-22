#include<stdio.h>

int addNumbers(int a, int b) {
    int sum = a + b;
    printf("Sum is : %d",sum);
}

int main() {
    int num1, num2;

    printf("Enter first number: ");
    scanf("%d", &num1);

    printf("Enter second number: ");
    scanf("%d", &num2);

    addNumbers(num1, num2);
    return 0;
}
