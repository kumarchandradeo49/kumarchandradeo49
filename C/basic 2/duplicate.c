#include<stdio.h>
int main()
{
    int i,j,k,size=8;
    int a[8]={1,2,3,4,4,3,2,1};
    for(i=1;i<8;i++)
    {
        j=i-1;
        while(j>=0)
        {
            if(a[i]==a[j])
            {
                for(k=i;k<size-1;k++)
                {
                    a[k]=a[k+1];
                }
            size--,i--;
            }        
           j--;
        }
     
    }
   for(i=0;i<8;i++)
 {
    printf("%d",a[i]);
 }
  return 0;
}