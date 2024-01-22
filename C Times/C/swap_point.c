#include <stdio.h>
void swap(int *a, int *b);
int main(){
    int a = 5, b = 10;
    printf("a is %d and b is %d\n",a,b);
    swap(&a, &b);
    printf("a is %d and b is %d\n", a, b);
    return 0;
}
void swap(int *a, int *b){
    int temp;
    temp = *a;
    *a = *b;
    *b = temp;
}