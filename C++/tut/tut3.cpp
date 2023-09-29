#include<iostream>
using namespace std;
int c=641;
int main()
{ 
   
    int a,b,c;
    cout<<"enter a\n";
    cin>>a;           
    cout<<"enter b\n";
    cin>>b;
    c=a+b;
    cout<<"the sum is:"<<c<<endl;
    cout<<"the global c is:"<<::c<<endl;  //::scope resolution operator

    float d=16.6f;
    long double e=16.6l;
    cout<<"the value of d:"<<d<<endl;
    cout<<"the value of e is:"<<e<<endl;

    float x=12;
    float &y=x;   //reference variable
    cout<<x<<endl;
    cout<<y<<endl;

    float m=45.56;
    float n=4456.76;
    cout<<"the value of m is:"<<(int)m<<endl<<"the value of n is:"<<(float)n<<endl;  //typecasting
     cout<<"the value of m is:"<<(float)m<<endl<<"the value of n is:"<<float(n)<<endl;  //above line is same

   cout<<"the value of "<<m+n<<endl;
   cout<<"the value of "<<(int)m+(int)n<<endl;
   cout<<"the value of "<<int(m)+int(n)<<endl;

    return 0;
}