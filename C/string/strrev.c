#include<stdio.h>
#include<string.h>
int main()
{
    int l,i;
    char s1[30];
    char ch;
    printf("enter string1:");
    gets(s1);
    
    l=strlen(s1);
    for(i=0;i<l/2;i++)
    {
        ch=s1[i];
        s1[i]=s1[l-1-i];
        s1[l-1-i]=ch;
    }
    printf("%s",s1);
    return 0;
}