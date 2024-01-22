#include <stdio.h>

int sum_num(int n) {
    return n * (n + 1) / 2;
}

int main() {
    int n;

    printf("Enter the value of n: ");
    scanf("%d", &n);

    int result = sum_num(n);
    printf("The sum of the first %d natural numbers is: %d\n", n, result);

    return 0;
}
