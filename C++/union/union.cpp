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
 union money m1;
 m1.x=234;
 m1.favchar='s';
 cout<<m1.x<<endl;     //it will give garbage value as it acquire 4 byte but char acquire 1 byte
 cout<<m1.favchar<<endl;
 return 0;
}