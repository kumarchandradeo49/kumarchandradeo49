#include<stdio.h>
int main()
{
    int i,j;
    int a[3][4],b[3][4],c[3][4];
    printf("ENTER ELEMENTS OF MATRIX a\n");
    
        for(i=0;i<3;i++)
        {
            for(j=0;j<4;j++)
            {
           scanf("%d",&a[i][j]);
            }
            
        }
        printf("real matrix a is\n");
         for(i=0;i<3;i++)
        {
            for(j=0;j<4;j++)
            {
           printf("%d\t",a[i][j]);
        
            }
            printf("\n");
            
        }
        printf("ENTER ELEMENTS OF MATRIX b\n");
        
        for(i=0;i<3;i++)
        {
            for(j=0;j<4;j++)
            scanf("%d",&b[i][j]);
        }
        printf("real matrix b is\n");
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
            c[i][j]=a[i][j]+b[i][j];
        }
        printf("PRINT MATRIX c\n");
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