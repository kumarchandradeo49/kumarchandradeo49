#include<stdio.h>
int avg(int[],int);
void main()
{
    int marks[]={20,20,20,22,28,26},size,average;
    
    size=sizeof(marks)/sizeof(marks[0]);
    average=avg(marks,size);
    printf("average is :%d\n",average);
    printf("inside main fxn size of array(in bytes) is :%d",sizeof(marks));
}


int avg(int a[],int size)
{
    int i,sum=0,average=0;
    for(i=0;i<size;i++)
    {
        sum=sum+a[i];
    }
     
    average=sum/size;
    printf("inside avg fxn size of array(in bytes) is :%d\n",sizeof(a));
    return average;

}