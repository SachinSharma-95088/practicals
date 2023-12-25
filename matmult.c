#include<stdio.h>

void main()
{
    int i,j,k,mat1[2][2],mat2[2][2],mult[2][2];
    printf("enter first matrix elements");
    for(i=0;i<2;i++)
    {
        for(j=0;j<2;j++)
        {
            scanf("%d",&mat1[i][j]);
        }
    }
    
    printf("enter second matrix elements");
    for(i=0;i<2;i++)
    {
        for(j=0;j<2;j++)
        {
            scanf("%d",&mat2[i][j]);
        }
    }
    printf("matrix first elements are\n ");
    for(i=0;i<2;i++)
    {
        for(j=0;j<2;j++)
        {
            printf("%d ",mat1[i][j]);
        }
        printf("\n");
    }
     printf("matrix second elements are\n ");
    for(i=0;i<2;i++)
    {
        for(j=0;j<2;j++)
        {
            printf("%d ",mat2[i][j]);
        }
        printf("\n");
    }
    
    //multiplication of matrix
    for(i=0;i<2;i++)
    {
        for(j=0;j<2;j++)
        {
            mult[i][j]=0;
            for(k=0;k<2;k++)
            {
                mult[i][j] += mat1[i][k]*mat2[k][j];
            }
        }
    }
    printf("Multiplication of matrix is\n ");
    for(i=0;i<2;i++)
    {
        for(j=0;j<2;j++)
        {
            printf("%d ",mult[i][j]);
        }
        printf("\n");
    }
}