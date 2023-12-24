#include<stdio.h>
int main(){
    int n;
    printf("enter an integer");
    scanf("%d",&n);

    if(n%2 == 0){
        printf("n is even number");
    }
    else{
        printf("n is odd number");
    }
}