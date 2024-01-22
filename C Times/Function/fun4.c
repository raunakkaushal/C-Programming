// with parameter with return 
#include<stdio.h>

int add(int x, int y);

int main (){
    int a,b,sum;
    a = 10;
    b = 10;
    sum = add(a, b);
    printf("Sum is %d\n", sum);
    return 0;
}
int add(int x, int y){
    return x + y;
}