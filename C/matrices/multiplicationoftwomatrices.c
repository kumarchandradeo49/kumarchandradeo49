#include<stdio.h>
int main()
{
    int i,j,a[12][12],b[12][12],c[12][12];
    int p,q,m,n;
    printf("enter value of p and q:");
    scanf("%d %d",&p,&q);
    printf("enter value of m and n:");
    scanf("%d %d",&m,&n);
    if(q==m)
    {
      printf("enter elements of matrix a:\n");
      for(i=0;i<p;i++)
      {
        for(j=0;j<q;j++)
        {
            scanf("%d",&a[i][j]);
        }
      }
     printf("real matrix a is:\n");
    for(i=0;i<p;i++)
    {
        for(j=0;j<q;j++)
        {
            printf("%d\t",a[i][j]);
        }
        printf("\n");
    }
     printf("enter elements of matrix b:\n");
    for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
        {
            scanf("%d",&b[i][j]);
        }
    }
    printf("real matrix b is:\n");
    for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
        {
            printf("%d\t",b[i][j]);
        }
        printf("\n");
    }
    
    int k;
    for(i=0;i<p;i++)
    {
        for(j=0;j<n;j++)
        {
            int sum=0;
            for(k=0;k<q;k++)
            {
                sum=sum+a[i][k]*b[k][j];
                
                
            }
            c[i][j]=sum;
            
        }
        
    }
    printf("multiplication is :\n");
    for(i=0;i<p;i++)
    {
        for(j=0;j<n;j++)
        {
            printf("%d\t",c[i][j]);
        }
        printf("\n");
    }
    }
    else
    printf("not valid matrix:");

    return 0;
}