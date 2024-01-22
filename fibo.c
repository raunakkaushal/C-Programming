#include<stdio.h>
void fibo(int n);

int main(){
    int n;

    printf("Enter a positive number: ");
    scanf("%d", &n);

    fibo(n);

    return 0;
}
void fibo(int n){
    int a = 0, b = 1, c, i;
    printf("Fibonacci sequence up to %d number is : ", n);
    for (i = 1; i <= n; i++) 
    {
        printf("%d ", a);
        c = a + b;
        a = b;
        b = c;
    }
    printf("\n");
}
