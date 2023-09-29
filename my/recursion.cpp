#include<iostream>
using namespace std;
int fact(int n)
{
  if(n<=1)
  {
    return 1;
  }
  else
  return n*fact(n-1);
}
int fib(int n)
{
    if(n<=2)
    {
        return 1;
    }
    else
    return fib(n-2)+fib(n-1);
}
int main()
{
  int x;
  cout<<"enter value of x:";
  cin>>x;
  cout<<"the factorial of x is :"<<fact(x)<<endl;
  cout<<"the fibonacci number at position x is :"<<fib(x);
}