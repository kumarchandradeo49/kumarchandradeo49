#include<stdio.h>
#include<string.h>
int main()
{
    
    char s1[30];

    printf("enter string1:");
    gets(s1);
   strrev(s1);
    printf("%s",s1);
    return 0;
}