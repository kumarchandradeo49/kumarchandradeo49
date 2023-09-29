#include<iostream>
using namespace std;
int sum(int a,int b)
{
    return a+b;
}
int sum(int a,int b,int c)
{
    return a+b+c;
}
int main()
{
    int a,b,c;
    cout<<"enter the value of a:"<<endl;
    cin>>a;
    cout<<"enter te value of b:"<<endl;
    cin>>b;
    cout<<"enter the value of a:"<<endl;
    cin>>c;
    cout<<"the sum is:"<<sum(a,b)<<endl;
    cout<<"sum is:"<<sum(a,b,c)<<endl;
    return 0;
}