#include<iostream>
using namespace std;

typedef struct employee
{
    int rollno;
    float salary;
    char favchar;
    int mobno;

}hii;

union money
{
    int x;
    char favchar;
};
int main()
{
 hii chandu;
 enum meal{breakfast,lunch,dinner};
 meal m1=lunch;
 meal m2=breakfast;
 meal m3=dinner;
 cout<<breakfast<<endl;
 cout<<lunch<<endl;
 cout<<dinner<<endl;

cout<<m1<<endl;
cout<<m2<<endl;
cout<<m3<<endl;

cout<<(m1==2)<<endl;
cout<<(m2==0)<<endl;
 return 0;
}