#include <stdio.h>
#include <math.h>

int main() {
    float a, b, result;
    char ch;

    printf("Enter first number: ");
    scanf("%f", &a);

    printf("Enter an operator (+, -, *, /, ^): ");
    scanf(" %c", &ch);

    printf("Enter second number: ");
    scanf("%f", &b);

    switch (ch) {
        case '+':
            result = a + b;
            break;
        case '-':
            result = a - b;
            break;
        case '*':
            result = a * b;
            break;
        case '/':
            if (b == 0) {
                printf("Error: Division by zero is not allowed!\n");
                return 1;
            }
            result = a / b;
            break;
        case '^':
            result = pow(a, b);
            break;
        default:
            printf("Error: Invalid operator!\n");
            return 1;
    }

    printf("Result: %.2f\n", result);

    return 0;
}
