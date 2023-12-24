// 7.Find Largest Element in an Array: Write a program that uses for loops to find the largest element in a 1-D array and returns it. 
#include<stdio.h>
void main()
{
    int num[13]={4,6,13,75,87,35,86,22,88,99,3,21,24};
    int  temp = num[0];
      
    for(int i=1;i<13;i++)
    {
        if(num[i]>=temp) 
        {
            temp=num[i];
            
        }
    } 
    printf("Maximum in array is %d\n",temp);
}