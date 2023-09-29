#include<stdio.h>
int main()
{
    int highest,secondhighest,lowest,sum=0,n,i;
    int a[10];
    float avg;
    printf("enter size of array:");
    scanf("%d",&n);
    printf("enter elements of array:\n");
    for(int i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    highest=a[0];
    for(int i=0;i<n;i++)
    {
        
            if(a[i]>highest)
        {
            highest=a[i];
            
        }
    }
    
    printf("highest element in the array is %d\n",highest);
    lowest=a[0];
    for(i=0;i<n;i++)
    {
        if(a[i]<lowest)
        {
          lowest=a[i];
        }
    }
    printf("lowest elements in the array is %d \n",lowest);
    secondhighest=a[0];
     for(i=0;i<n;i++)
    {
        if(a[i]>secondhighest && a[i]<highest)
        {
          secondhighest =a[i];
        
        }
    }
    printf("secondhighest element in the array is %d\n",secondhighest);
    for(i=0;i<n;i++)
   { 
      sum=sum+a[i];
      avg=sum/n;
   }
   printf("the average of the elements is %f\n",avg);
   
   return 0;

}