// #include <stdio.h>

// void sum_of_natural_numbers(int n, int *result) {
//     *result = n * (n + 1) / 2;
// }

// int main() {
//     int n, result;
 
//     printf("Enter the value of n: ");
//     scanf("%d", &n);

//     sum_of_natural_numbers(n, &result);

//     printf("The sum of the first %d natural numbers is: %d\n", n, result);

//     return 0;
// }
#include <stdio.h>

void calculateSum(int n, int *re) {
    *re = 0;

    for (int i = 1; i <= n; ++i) {
        *re += i;
    }
}

int main() {
    int n, result;

    printf("Enter the value of n: ");
    scanf("%d", &n);

    calculateSum(n, &result);

    printf("The sum of the first %d natural numbers is: %d\n", n, result);

    return 0;
}
