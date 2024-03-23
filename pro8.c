#include<stdio.h>

int main() {
    int m, n, i, j;

    printf("Enter the number of rows: ");
    scanf("%d", &m);

    printf("Enter the number of columns: ");
    scanf("%d", &n);

    int mat[m][n], tp[n][m];

    printf("Enter elements of the matrix:\n");
    for(i = 0; i < m; i++) {
        for(j = 0; j < n; j++) {
            scanf("%d", &mat[i][j]);
        }
    }

	printf("Your Matrix is :\n");
	for(i = 0; i < m; i++) {
        for(j = 0; j < n; j++) {
            printf("%d\t", mat[i][j]);
        }
        printf("\n");
    }

    for(i = 0; i < n; i++) {
        for(j = 0; j < m; j++) {
            tp[i][j] = mat[j][i];
        }
    }

    printf("Transpose of the matrix:\n");
    for(i = 0; i < n; i++) {
        for(j = 0; j < m; j++) {
            printf("%d\t", tp[i][j]);
        }
        printf("\n");
    }

    return 0;
}

