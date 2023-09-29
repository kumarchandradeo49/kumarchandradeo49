#include<stdio.h>
  int main(){
    int i;
    int a[10];
    printf("enter elemnts of array:\n");
    for(i=0;i<10;i++)
    {
    scanf("%d",&a[i]);
    }
   int min=a[0];

    
    for(int i=0;i<10;i++)
    {
      if (a[i]<min)
      {
        min=a[i];
      }
    }
    printf("the first smallest element in the array is %d\n",min);
    int secondmin=a[0];


   for(int i=0;i<10;i++)
      {
        if (a[i]<secondmin && a[i]>min)
        {
        secondmin=a[i];
        }
    }
    printf("the second smallest element in the array is %d\n",secondmin);
    // int thirdmin=a[0];
    // for(int i=0;i<10;i++)
    //   {
    //     if (a[i]<thirdmin && a[i]>secondmin && a[i]>min)
    //     {
    //     thirdmin=a[i];
    //     }
    // }
    // printf("the third smallest element in the array is %d",thirdmin);
    
  return 0;
  }
    



