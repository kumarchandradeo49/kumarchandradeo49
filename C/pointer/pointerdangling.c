#include<stdio.h>
#include<stdlib.h>
void main()
{
    int a=6;
    int *ptr=&a;
    // {
    //     int a=6;
    //     ptr=&a;
    //     printf("a=%d\n",*ptr);
    // }
    // printf("%d",*ptr);//dangling pointer may be we get 6
    printf("a=%d\n",*ptr);
    free(ptr);
    printf("%d",*ptr);//dangling pointer
}