#include<stdio.h>

void modify(char *,char *);  //(char str[],char str[])
void main()
{
    char str1[]="chandradeo"; //str1[]
    char str2[]="kumar";      //str2[]
    modify(str1,str2);

}
void modify(char * str1,char * str2) //(char str1[],char str2[])
{
    int i,l=0;
    for(i=0;str1[i]!='\0';i++)
    {
        l=l+1;
    }
    str1[0]='C';
    str2[0]='K';
    printf("length of string 1 is:%d\n",l);
    
   
    
    printf("both strings are:%s %s",str1,str2);
}