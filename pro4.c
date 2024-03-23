#include<stdio.h>

int main() {
    int r, c, i, j;
    printf("Enter number of rows: ");
    scanf("%d", &r);
    printf("Enter number of columns: ");
    scanf("%d", &c);

    printf("Enter your 1st matrix elements:\n");
    int mat1[r][c], mat2[r][c];
    for(i = 0; i < r; i++) {
        for(j = 0; j < c; j++) {
            scanf("%d", &mat1[i][j]);
        }
    }   

    printf("Enter your 2nd matrix elements:\n");
    for(i = 0; i < r; i++) {
        for(j = 0; j < c; j++) {
            scanf("%d", &mat2[i][j]);
        }
    }

    printf("1st Matrix:\n");
    for(i = 0; i < r; i++) {
        for(j = 0; j < c; j++) {
            printf("%d\t", mat1[i][j]);
        }
        printf("\n");
    }
    
    printf("2nd Matrix:\n");
    for(i = 0; i < r; i++) {
        for(j = 0; j < c; j++) {
            printf("%d\t", mat2[i][j]);
        }
        printf("\n");
    }
    
    printf("Result Matrix:\n");
    int res[r][c];
    for(i = 0; i < r; i++) {
        for(j = 0; j < c; j++) {
            res[i][j] = mat1[i][j] + mat2[i][j];
            printf("%d\t",res[i][j]);
        }
        printf("\n");
    }
    
    return 0;
}

