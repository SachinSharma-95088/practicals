#include<stdio.h>
void main(){
    int num[13]={3,500,45,3,99,5,54,5,1,33,98,45,5};
    int  temp=num[0];
      
    for(int i=1;i<13;i++)
    {
        if(num[i]<=temp) 
        {
            temp=num[i];
        }
    }    
    printf("Minimum in array is %d\n",temp);
    
    for(int i=1;i<13;i++)
      {
         if(num[i]>=temp) 
         {
             temp=num[i];
            
         }
      } printf("Maximum in array is %d\n",temp);
}