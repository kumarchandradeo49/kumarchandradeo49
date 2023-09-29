#include<iostream>
using namespace std;
int &swap(int &x,int &y)
{
  int temp;
  temp=x;
  x=y;
  y=temp;
  return y;
}
int main()
{
    int a,b;
    cout<<"enter the value of a and b"<<endl;
    cin>>a>>b;
    cout<<"the actual value of a is:"<<a<<"and b is"<<b<<endl;
    swap(a,b)=641;
    cout<<"the swapped value of a is:"<<a<<"and b is"<<b;
    return 0;

}