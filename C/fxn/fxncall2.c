//call by reference
#include<stdio.h>
void fun(int *,int *);        //parameter or formal parameter
void main()
{
    int x=5;
    int y=7;
    fun(&x,&y);             //argument or actual parameter
    printf("inside main fxn\n");
    printf("x=%d y=%d",x,y); 
}

void fun(int *x,int *y) //parameter or formal parameter
{
    * x=7;
    * y=5;
    printf("inside fun\n");
    printf("x=%d y=%d\n",*x,*y); 
}

