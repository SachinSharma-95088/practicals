#include<stdio.h>
void swapnum(int *a, int *b){
    int temp =*a;
    *a=*b;
    *b=temp;
}
int main(){
    int a=2;
    int b=4;
    printf("before swap a=%d,b=%d\n",a,b);
    swapnum(&a,&b);
    printf("after swap a=%d, b=%d",a,b);

    return 0;

}