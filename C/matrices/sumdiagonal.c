#include<stdio.h>
int main()
{
    int i,j,sum=0;
    int a[3][3];
    printf("ENTER ELEMENTS\n");
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        scanf("%d",&a[i][j]);
    }
    printf("SHOW REAL MATRIX a\n");
    for(i=0;i<3;i++)
    {
      for(j=0;j<3;j++)
      {
        printf("%d\t",a[i][j]);
      }
      printf("\n");  
}
printf("DIAGONAL ELEMENTS ARE\n");
for(i=0;i<3;i++)
{
  for(j=0;j<3;j++)
  {
   if(i==j)
   printf("%d\t",a[i][j]);
  }
}

return 0;
}