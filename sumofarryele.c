// 8. Sum of Array Elements: Write a program to calculate and return the sum of elements of a 1-D array. 
 #include<stdio.h>
void main()
{
    int sum=0,num[13]={4,6,13,75,87,35,86,22,88,99,3,21,24};
      
    for(int i=1;i<13;i++)
    {
        sum =sum + num[i];
    }  
    printf("sum is %d",sum);
}