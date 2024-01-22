#include<stdio.h>
int main (){
    int n,rev = 0, rem;
    n=123;
    printf("Entered number = %d\n",n);
    while(n!=0){
        rem = n%10;
        rev = rev*10 + rem;
        n /= 10;
    }
    printf("Reversed Number = %d\n", rev);
    return 0;
}