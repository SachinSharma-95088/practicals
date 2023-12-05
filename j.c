#include<stdio.h>

int main(){
    int n;
    printf("enter a value n: ");
    scanf("%d",&n);
    
    int sum=1;
    for(int i=1;i<=n;i++){
        
        sum +=i;
        printf("sum is %d ",sum);
    }
    return 0;
}