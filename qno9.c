// traversing of arrrey and average

#include <stdio.h>

int main()
{  int temp=0;
  
    int num[13]={34,6,13,75,87,35,86,22,88,99,3,21,24};
    
    
    for(int i=0;i<13;i++)
    {
        temp=temp+num[i];
    }  
    printf("average value= %d",temp/13);

    return 0;
}

