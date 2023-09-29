#include<stdio.h>
#include<string.h>
int main()
{
    char str[100];
    int i,totalwords=1;

printf("ENTER ANY STRING:");
gets(str);
for(i=0;str[i]!=0;i++)
{
    if(str[i]==' ' || str[i]=='\n' || str[i]=='\t');
    {
        totalwords++;
    }
}
    printf("\n THE TOTAL NUMBER OF WORDS IN THIS STRING IS %s=%d",str,totalwords);
    return 0;
}