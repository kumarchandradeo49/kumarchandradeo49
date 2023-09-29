#include<stdio.h>
int main()
{ 
  int marks;
  printf("enter marks:");
  scanf("%d",&marks);
  if(marks>100 && marks<0)
  {
    printf("invalid marks");
  }
 else if(90<=marks && marks<=100)
  {
    printf("grade is A+");
  }
  else if(80<=marks && marks<90)
  {
    printf("grade is A");
  }
  else if(70<=marks && marks<80)
  {
    printf("grade is B");
  }
  else if(60<=marks && marks<70)
  {
    printf("grade is B+");
  }
  else if(50<=marks && marks<60)
  {
    printf("grade is C");
  }
  else
  {
    printf("you are fail");
  }
    return 0;
}