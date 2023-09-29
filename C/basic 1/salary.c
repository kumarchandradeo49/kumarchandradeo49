#include<stdio.h>;
void main()
{
 float DA,HR,GS,BS;
 printf("ENTER YOUR BASIC SALARY=");
 scanf("%f",&BS);

 DA=0.4*BS;
 HR=0.2*BS;
 GS=DA+HR+BS;


 printf("\n BS:%f", BS);
 printf("\n DA:%f", DA);
 printf("\n HR:%f", HR);
 printf("\n GS:%f", GS);

}
