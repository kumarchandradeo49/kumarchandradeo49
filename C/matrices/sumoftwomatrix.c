#include<stdio.h>
int main()
{
    int i,j,a[3][4],b[3][4],c[3][4];
    printf("enter elements of matrix a:\n");
    for(i=0;i<3;i++)
    {
        for(j=0;j<4;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
    printf("real matrix a is:\n");
    for(i=0;i<3;i++)
    {
        for(j=0;j<4;j++)
        {
            printf("%d\t",a[i][j]);
        }
        printf("\n");
    }
     printf("enter elements of matrix b:\n");
    for(i=0;i<3;i++)
    {
        for(j=0;j<4;j++)
        {
            scanf("%d",&b[i][j]);
        }
    }
    printf("real matrix b is:\n");
    for(i=0;i<3;i++)
    {
        for(j=0;j<4;j++)
        {
            printf("%d\t",b[i][j]);
        }
        printf("\n");
    }
    for(i=0;i<3;i++)
    {
        for(j=0;j<4;j++)
        {
          c[i][j]=a[i][j]+b[i][j]; 
        }
    }
   printf("real matrix c is:\n");
   for(i=0;i<3;i++)
    {
        for(j=0;j<4;j++)
        {
            printf("%d\t",c[i][j]);
        }
        printf("\n");
    }
   return 0;
    



}