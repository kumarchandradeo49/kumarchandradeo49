#include<stdio.h>
void main()
{
    char c;
    printf("enter your character");
    scanf("%c",&c);
    //check if entered character is a member of {a,e,i,o,u,A,E,I,O,U}
    if (c=='a' || c=='e' || c=='i' || c=='o' || c=='u' || c=='A'|| c=='E' || c=='I' || c=='O' || c=='U')
   { printf("%c is a vowel",c);
   }else{
    printf("%c is a consonant\n",c);
   }
}