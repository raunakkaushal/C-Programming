#include<stdio.h>
void sum(int n);
int main(){
    int n;
    n = 5;
    sum(n);
    return 0;
}
void sum(int n){
    int i,sum=0;
    for(i=1; i<=n; i++){
        sum += i;
    }
    printf("Sum of n natural number is %d", sum);
}