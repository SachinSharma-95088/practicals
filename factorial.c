#include<stdio.h>
int fact(int n);

int main(){
   
    printf("factorial is %d",fact(5));
    return 0;
}
int fact(int n){
    int fact=1;
    for(int i=1; i<=n; i++){
        fact =fact*i;
    }
    return fact;
}
    