#include<stdio.h>
int main()
{
    int i,j,a[2][3];
    printf("enter elements of matrix a:\n");
    for(i=0;i<2;i++)
    {
      for(j=0;j<3;j++)
       {
        scanf("%d",&a[i][j]);
       }   
    }
    printf("real matrix a is:\n");
    for(i=0;i<2;i++)
    {
      for(j=0;j<3;j++)
       {
        printf("%d\t",a[i][j]);
       } 
       printf("\n");  
    }

    printf("transpose of real matrix a is:\n");
    for(i=0;i<3;i++)
    {
      for(j=0;j<2;j++)
       {
        printf("%d\t",a[j][i]);
       } 
       printf("\n");  
    }
    return 0;
}