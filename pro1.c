#include<stdio.h>

int main() {
    int r, c, i, j, sum = 0;

    printf("Enter the size of row: ");
    scanf("%d", &r);

    printf("Enter the size of column: ");
    scanf("%d", &c);

    int arr[r][c];

    printf("Enter the elements of the matrix:\n");

    for(i = 0; i < r; i++) {
        for(j = 0; j < c; j++) {
            scanf("%d", &arr[i][j]);
            sum = sum + arr[i][j];
        }
    }

    printf("The matrix you entered is:\n");

    for(i = 0; i < r; i++) {
        for(j = 0; j < c; j++) {
            printf("%d\t", arr[i][j]);
        }
        printf("\n");
    }

    printf("The sum of all elements in the matrix is: %d\n", sum);

    return 0;
}

