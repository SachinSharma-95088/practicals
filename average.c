#include <stdio.h>

void main()
{   int a ,temp =0;
  
    int num[13]={2,1,4,6,8,8,9,4,2,6,7,8,3};
    
    for(int i=0;i<13;i++)
    {
        printf("index and value are %d %d\n",&a,num[i]);
        temp += num[i];
         
    }   printf("average value= %d",temp/13);

}
