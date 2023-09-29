#include<iostream>
using namespace std;
int main()
{
  //   what is pointer -data type which hold address of other
  //   &-address of operator 
  //  *dereference operator 
  
 int a=3;
 int *p=&a;
 cout<<*p<<endl;
 int **m=&p;
 cout<<**m<<endl;
 int ***n=&m;
 cout<<***n;



 return 0;
}