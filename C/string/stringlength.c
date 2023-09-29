#include<stdio.h>
#include<string.h>
int main()
{
    int count=0,i=0;
    char name[30];
    printf("enter array elements:");
    gets(name);
   //count=strlen(name);
   while(name[i]!='\0')
   {
    count++;
    i++;
   }
    printf("string length is %d",count);
    return 0;

}