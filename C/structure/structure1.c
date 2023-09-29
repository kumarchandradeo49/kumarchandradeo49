#include<stdio.h>
struct student {
char name[20];
int roll_no;
int age;
int mob;
float cgpa;
};
int main()
{
  struct student s[5];
    int i,j;
    for(i=0;i<5;i++)
   {
     printf("ENTER DETAILS OF STUDENT:\n",i+1);

     printf("ENTER name:");
     scanf("%s",s[i].name);
     printf("ENTER roll_no:");
     scanf("%d",&s[i].roll_no);
     printf("ENTER age:");
     scanf("%d",&s[i].age);
     printf("ENTER mob:");
     scanf("%d",&s[i].mob);
     printf("ENTER cgpa:");  
     scanf("%f",&s[i].cgpa); 
   }
   for(j=0;j<5;j++)
   {
     printf("name is :%s\t roll_no is: %d\t age is :%d\t mob is :%d\t cgpa is :%f\t",s[j].name,s[j].roll_no,s[j].age,s[j].mob,s[j].cgpa);
   printf("\n");
   }
   return 0;
}