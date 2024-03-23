#include<stdio.h>

int main() {
    int m, n, p, q, i, j, k;

    printf("Enter the number of rows for first matrix: ");
    scanf("%d", &m);

    printf("Enter the number of columns for first matrix: ");
    scanf("%d", &n);

    printf("Enter the number of rows for second matrix: ");
    scanf("%d", &p);

    printf("Enter the number of columns for second matrix: ");
    scanf("%d", &q);

    if (n != p) {
        printf("Matrices cannot be multiplied!\n");
        return 0;
    }

    int mat1[m][n], mat2[p][q], result[m][q];

    printf("Enter elements of first matrix:\n");
    for(i = 0; i < m; i++) {
        for(j = 0; j < n; j++) {
            scanf("%d", &mat1[i][j]);
        }
    }

    printf("Enter elements of second matrix:\n");
    for(i = 0; i < p; i++) {
        for(j = 0; j < q; j++) {
            scanf("%d", &mat2[i][j]);
        }
    }

    for(i = 0; i < m; i++) {
        for(j = 0; j < q; j++) {
            result[i][j] = 0;
            for(k = 0; k < n; k++) {
                result[i][j] = result[i][j] + mat1[i][k] * mat2[k][j];
            }
        }
    }

    printf("Product of the two matrices:\n");
    for(i = 0; i < m; i++) {
        for(j = 0; j < q; j++) {
            printf("%d\t", result[i][j]);
        }
        printf("\n");
    }

    return 0;
}

