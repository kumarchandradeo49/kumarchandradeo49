#include<stdio.h>
struct student {
    char name[100];
    int roll;
    int marks;
};
int main()
{
    struct student s[3];
    int i;
    struct student *p=s;
    for(i=0;i<3;i++)
    {
        printf("enter,name roll and marks:",i+1);
        scanf("%s %d %d",(p+i)->name,&(p+i)->roll,&(p+i)->marks);

    }
    for(i=0;i<3;i++)
    {
        printf("name is %s\n roll is %d\n marks is %d\n",(p+i)->name,(p+i)->roll,(p+i)->marks);
    }
    return 0;
}