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
    for(i=0;i<3;i++)
    {
        printf("enter,name roll and marks:",i+1);
        scanf("%s %d %d",s[i].name,&s[i].roll,&s[i].marks);

    }
    for(i=0;i<3;i++)
    {
        printf("name is %s\n roll is %d\n marks is %d\n",s[i].name,s[i].roll,s[i].marks);
    }
    return 0;
}