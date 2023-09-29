#include<iostream>
using namespace std;

//function prototype
int sum(int a,int b);
int main()
{
    int num1,num2;
    //num1 and num2 are actual parameters
    cout<<"enter first num"<<endl;
    cin>>num1;
    cout<<"enter num2"<<endl;
    cin>>num2;
    cout<<"the sum is "<<sum(num1 ,num2);
    return 0;
}

int sum(int a,int b)
{
    // formal parameters a and b will be taking values from actual parameters num1 and num2
    int c=a+b;
    return c;
}
