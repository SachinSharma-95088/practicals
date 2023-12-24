#include<stdio.h>
void swapnum(int *a, int *b){
    *a=*a+*b;
    *b=*a-*b;
    *a=*a-*b;
}
int main(){
    int a=3;
    int b=5;
    printf("before swap a=%d,b=%d\n",a,b);
    swapnum(&a,&b);
    printf("after swap a=%d, b=%d",a,b);

    return 0;
}