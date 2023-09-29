#include<stdio.h>
struct complex
{
    int real;
    int img;
};
typedef struct complex complex;
void swap(complex *,complex *);
void main()
{
    complex c1,c2;
  printf("enter first complex number:");
  scanf("%d %d",&c1.real,&c1.img);
  printf("enter second complex number:");
  scanf("%d %d",&c2.real,&c2.img);
  swap(&c1,&c2);
  printf("\n after swapping c1 is %d+i%d and c2 is %d+i%d",c1.real,c1.img,c2.real,c2.img);
}
void swap(complex *x,complex *y)
{
    complex temp;
    temp=*x;
    *x=*y;
    *y=temp;
}