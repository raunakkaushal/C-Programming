#include<stdio.h>
void fibbo(int n);
int main(){
    int n;
    n=5;
    fibbo(n);
    return 0;
}
void fibbo(int n){
    int a=0,b=1,c,i;
    for(i=1; i<=n; i++){
        printf(" %d",a);
        c=a+b;
        a=b;
        b=c;
    }
    printf("\n");
}