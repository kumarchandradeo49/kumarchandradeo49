#include<iostream>
using namespace std;
int sum(int a,int b)
{
    cout<<"usinf fxn with 2 arguments is  ";
    return a+b;
}
int sum(int a,int b,int c)
{
    cout<<"usinf fxn with 3 arguments is ";
    return a+b+c;
}
int main()
{
    cout<<"the sum of 3 and 5  "<<sum(3,5)<<endl;
    cout<<"the sum of 3,8 and 5 "<<sum(3,8,5)<<endl;
   return 0; 
}