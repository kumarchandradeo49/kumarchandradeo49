#include<stdio.h>
#include<string.h>
int main()
{
    char str1[100];
    char str2[100];
    int i,j;
    printf("please enter a string to convert into lowercase:\n");
    scanf("%s",str1);
   
   
    for(i=0;str1[i]!=0;i++)
    {
        if(str1[i]>='A' && str1[i]<='Z')
        {
            str1[i]=str1[i]+32;
        }
    
    }
   
     printf("\nTHE GIVEN STRING IN LOWERCASE=%s",str1);
     printf("\n");

     printf("please enter a string to convert into uppercase:");
     scanf("%s",str2);

    for(j=0;str1[j]!=0;j++)
    {
        if(str2[j]>='a' && str1[j]<='z')
        {
            str2[j]=str2[j]-32;
        }
    }
    printf("\nTHE GIVEN STRING IN UPPERCASE=%s",str2);
     return 0;
}
