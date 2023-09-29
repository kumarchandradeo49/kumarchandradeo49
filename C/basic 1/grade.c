#include<stdio.h>
int main()
{
    float marks;
    printf("enter marks");
    scanf("%f",&marks);
 if(marks<=100 && marks>=90)
    {
        printf("grade is A+");
    }
 else if(marks<90 && marks>=80)
   {
     printf("grade is A");
   }
 else if(marks<80 && marks>=70)
     {
    printf("grade is B+");
     }
 else if(marks<70 && marks>=60)
   { 
    printf("grade is B");
   }
 else if(marks<60 && marks>=50)
   {
    printf("grade is C");
   }
   else
   {
printf("FAIL");
   }
return 0;
}