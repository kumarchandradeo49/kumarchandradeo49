#include<stdio.h>
#include<string.h>
int main()
{
    int len1,len2,i;
    char name1[30];
    char name2[30];
    printf("enter string1:");
    gets(name1);
    printf("enter string2:");
    gets(name2);
   //strcat(name1,name2);
   // printf("%s",name1);
//    strcat(name2,name1);
//    printf("%s",name2);
len1=strlen(name1);
len2=strlen(name2);
for(i=0;i<=len2;i++)
{
    name1[len1+i]=name2[i];

}
printf("%s",name1);
   
    return 0;
}
