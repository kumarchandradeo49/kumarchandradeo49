#include<stdio.h>

char * display();
void main()
{
    char *str;
    str=display();
    //str[0]='C'; WE CANNOT MODIFY RETURN STRING
    printf("string is :%s",str);
}
char * display()
{
    
    static char str[]="chandu";
    return str;
  //return "chandu";
}