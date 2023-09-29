#include<stdio.h>;
void main()
{
 float km,meter=0,cm=0,feet=0,inch=0;
 printf("ENTER A DISTANCE IN KM=");
 scanf("%f",&km);

 meter=1000*km;
 feet=3281*km;
 inch=39370*km;
 cm=100000*km;

 printf("\n meter:%f", meter);
 printf("\n feet:%f", feet);
 printf("\n inch:%f", inch);
 printf("\n cm:%f", cm);

}


