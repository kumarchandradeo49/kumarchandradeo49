#include<iostream>
using namespace std;
// inline int product(int a,int b)     //used for smaller fxn so that fxn doesnot need to return everytime
// {
//     return a*b;
// }
// int main()
// {
//  int a,b;
//  cout<<"enter value of a and b:"<<endl;
//  cin>>a>>b;
//  cout<<"the product of a and b:"<<product(a,b)<<endl;
//  cout<<"the product of a and b:"<<product(a,b)<<endl;
//  cout<<"the product of a and b:"<<product(a,b)<<endl;
//  cout<<"the product of a and b:"<<product(a,b)<<endl;
//  cout<<"the product of a and b:"<<product(a,b)<<endl;
//  cout<<"the product of a and b:"<<product(a,b)<<endl;
//  cout<<"the product of a and b:"<<product(a,b)<<endl;
//  cout<<"the product of a and b:"<<product(a,b)<<endl;
//  cout<<"the product of a and b:"<<product(a,b)<<endl;

//     return 0;
// }

int product(int a,int b)     //not recommended to use inline fxn here
{
    static int c=0;  //this executes only once
    c=c+1;  //next time this fxn is run,the value of c will be retained
    return a*b+c;
}
int main()
{
 int a,b;
 cout<<"enter value of a and b:"<<endl;
 cin>>a>>b;
 cout<<"the product of a and b:"<<product(a,b)<<endl;
 cout<<"the product of a and b:"<<product(a,b)<<endl;
 cout<<"the product of a and b:"<<product(a,b)<<endl;
 cout<<"the product of a and b:"<<product(a,b)<<endl;
 cout<<"the product of a and b:"<<product(a,b)<<endl;
 cout<<"the product of a and b:"<<product(a,b)<<endl;
 cout<<"the product of a and b:"<<product(a,b)<<endl;
 cout<<"the product of a and b:"<<product(a,b)<<endl;
 cout<<"the product of a and b:"<<product(a,b)<<endl;

    return 0;
}