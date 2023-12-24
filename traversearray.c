#include <stdio.h>
void main(){
    int num[]={1,2,3,4,5,6,7,8,9,10};

    int size =sizeof(num)/sizeof(num[0]);
    printf("odd index elements\n");

    for(int i=1;i<size;i=i+2){
        printf("%d ",num[i]);

    }
    printf("\n");

}