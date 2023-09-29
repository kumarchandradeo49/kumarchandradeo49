#include<stdio.h>
int main()
{
    int english,mathematics,physics,computer,chemistry;
    float total,percentage;
    printf("enter the five subjects marks :\n");
    scanf("%d%d%d%d%d",&mathematics,&physics,&chemistry,&english,&computer);
    total=physics+chemistry+mathematics+english+computer;
    percentage=(total/500)*100;
    printf("total marks=%.2f\n",total);
    printf("marks percentage=%.2f\n",percentage);
    if(percentage>=90) {
        printf("\ngrade is A");
    }
    else if(percentage>=80) {
        printf("\ngrade is B");
    }
    else if(percentage>=70) {
        printf("\ngrade is C");
    }
    else if(percentage>=60) {
        printf("\ngrade is D");
    }
    else if(percentage>=50) {
        printf("\ngrade is E");
    }
    else {
    printf("\ngrade is FAIL");
    }
    
    return 0;

}