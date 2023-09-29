#include<stdio.h>
void sum(int a,int b)
{
    printf("sum is:%d",a+b);
}

void sub(int a,int b)
{
    printf("sub is:%d",a-b);
}

void mul(int a,int b)
{
    printf("mul is:%d",a*b);
}

void div(int a,int b)
{
    printf("div is:%d",a/b);
}

int main()
{
    int ch,a,b;
    int (*fptr[10])(int,int)={sum,sub,mul,div};


    printf("0 for sum\n1 for sub\n2 for mul\n3 for div\n:");
    printf("enter choice:");
    scanf("%d",&ch);
    printf("enter a and b:");
    scanf("%d %d",&a,&b);
                                            // switch(ch)
                                            // {
                                            //     case 0:sum(a,b);
                                            //     break;
                                            //     case 1:sub(a,b);
                                            //     break; 
                                            //     case 2:mul(a,b);
                                            //     break; 
                                            //     case 3:div(a,b);
                                            //     break; 
                                            //     default:
                                            //     printf("enter valid choice:");
        
                                            // }
    (*fptr[ch])(a,b);
}