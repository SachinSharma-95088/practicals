#include<stdio.h>

void main()
{
    int i,j,mat1[2][2],mat2[2][2],sum[2][2];
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
    
    //sum[2][2]
    for(i=0;i<2;i++)
    {
        for(j=0;j<2;j++)
        {
            sum[i][j]=mat1[i][j]+mat2[i][j];
        }
    }
    printf("sum of two matrix is\n");
    for(i=0;i<2;i++)
    {
        for(j=0;j<2;j++)
        {
            printf("%d ",sum[i][j]);
        }
        printf("\n");
    }

}