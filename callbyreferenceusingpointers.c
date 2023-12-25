#include<stdio.h>

void swap(int a,int b);
void _swap(int *a,int *b);
int main()
{
    int x=3,y=5;
    _swap(&x,&y);
    printf("x=%d and y=%d",x,y);
    return 0;
}
//call by reference
void _swap(int *a,int*b)
{
    int t=*a;
    *a=*b;
    *b=t;
}