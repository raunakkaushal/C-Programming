#include<stdio.h>

int main() {
    int r1, c1, r2, c2, i, j, k;
    printf("Enter number of rows for first matrix: ");
    scanf("%d", &r1);
    printf("Enter number of columns for first matrix: ");
    scanf("%d", &c1);
    printf("Enter number of rows for second matrix: ");
    scanf("%d", &r2);
    printf("Enter number of columns for second matrix: ");
    scanf("%d", &c2);

    if (c1 != r2) {
        printf("Matrix multiplication not possible!\n");
        return 1;
    }

    printf("Enter elements of first matrix:\n");
    int mat1[r1][c1], mat2[r2][c2];
    for(i = 0; i < r1; i++) {
        for(j = 0; j < c1; j++) {
            scanf("%d", &mat1[i][j]);
        }
    }   

    printf("Enter elements of second matrix:\n");
    for(i = 0; i < r2; i++) {
        for(j = 0; j < c2; j++) {
            scanf("%d", &mat2[i][j]);
        }
    }

    printf("First Matrix:\n");
    for(i = 0; i < r1; i++) {
        for(j = 0; j < c1; j++) {
            printf("%d\t", mat1[i][j]);
        }
        printf("\n");
    }
    
    printf("Second Matrix:\n");
    for(i = 0; i < r2; i++) {
        for(j = 0; j < c2; j++) {
            printf("%d\t", mat2[i][j]);
        }
        printf("\n");
    }

    int res[r1][c2];
    printf("Result Matrix:\n");
    for(i = 0; i < r1; i++) {
        for(j = 0; j < c2; j++) {
            res[i][j] = 0;
            for(k = 0; k < c1; k++) {
                res[i][j] += mat1[i][k] * mat2[k][j];
            }
            printf("%d\t", res[i][j]);
        }
        printf("\n");
    }
    
    return 0;
}

