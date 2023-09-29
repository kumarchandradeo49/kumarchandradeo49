#include<stdio.h>
int main()
{
    int i,j,a[3][3];
    printf("enter elements of matrix a:\n");
    for(i=0;i<3;i++)
    {
      for(j=0;j<3;j++)
       {
        scanf("%d",&a[i][j]);
       }   
    }
    printf("real matrix a is:\n");
    for(i=0;i<3;i++)
    {
      for(j=0;j<3;j++)
       {
        printf("%d\t",a[i][j]);
       }
       printf("\n");
    }   
    int sum_row=0,sum_column=0;
    for(i=0;i<3;i++)
    {
      for(j=0;j<3;j++)
       {
        sum_row=sum_row+a[i][j];
        sum_column=sum_column+a[j][i];
       }
       printf("sum of rows elements is %d\n",sum_row);
       printf("sum of column elements is %d\n",sum_column);
    }
    return 0;
}
