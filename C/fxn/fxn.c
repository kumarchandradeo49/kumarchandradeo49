#include<stdio.h>
int fact(int n){
    int i=1,fact=1;
    while(i<=n)
    {
      fact=fact*i;
    i++;
    }
    return fact;
}
int main()
{

    int n;
    int z;
    
    
    printf("ENTER NUMBER n:");
    scanf("%d",&n);
    z=fact(n);
    printf("FACTORIAL IS %d:",z);
    return 0;

}