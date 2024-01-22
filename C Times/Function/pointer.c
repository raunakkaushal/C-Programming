#include <stdio.h>

int main() {
    // Declare a variable
    int num = 42;

    // Declare a pointer and assign the address of the variable to it
    int *ptr = &num;

    // Access the value using the pointer
    printf("Value of num: %d\n", num);
    printf("Value using pointer: %d\n", *ptr);

    // Modify the value using the pointer
    *ptr = 99;
    
    // The original variable is modified through the pointer
    printf("Modified value of num: %d\n", num);

    return 0;
}
