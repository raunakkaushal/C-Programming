#include<stdio.h>

void addmat(int m, int n, int mat1[m][n], int mat2[m][n], int res[m][n]) {
    int i, j;
    for (i = 0; i < m; i++) {
        for (j = 0; j < n; j++) {
            res[i][j] = mat1[i][j] + mat2[i][j];
        }
    }
}

void printmat(int m, int n, int mat[m][n]) {
    int i, j;
    for (i = 0; i < m; i++) {
        for (j = 0; j < n; j++) {
            printf("%d ", mat[i][j]);
        }
        printf("\n");
    }
}

int main() {
    int r, c, i, j;
    printf("Enter size of row: ");
    scanf("%d", &r);
    printf("Enter size of col: ");
    scanf("%d", &c);

    int mat1[r][c], mat2[r][c], res[r][c];

    printf("Enter 1st Matrix:\n");
    for (i = 0; i < r; i++) {
        for (j = 0; j < c; j++) {
            scanf("%d", &mat1[i][j]);
        }
    }

    printf("Enter 2nd Matrix:\n");
    for (i = 0; i < r; i++) {
        for (j = 0; j < c; j++) {
            scanf("%d", &mat2[i][j]);
        }
    }

    addmat(r, c, mat1, mat2, res);

    printf("First Matrix:\n");
    printmat(r, c, mat1);

    printf("Second Matrix:\n");
    printmat(r, c, mat2);

    printf("Result Matrix (Sum of First and Second Matrix):\n");
    printmat(r, c, res);

    return 0;
}

