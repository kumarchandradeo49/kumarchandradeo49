#include<stdio.h>
int main()
{
   int a=5;
   float b=6.66;
   char c='d';
   void *vp;
   vp=&a;
   printf("a=%d\n",*(int*)vp);
   vp=&b;
   printf("b=%f\n",*(float*)vp);
   vp=&c;
   printf("c=%c\n",*(char*)vp);

   return 0;
}