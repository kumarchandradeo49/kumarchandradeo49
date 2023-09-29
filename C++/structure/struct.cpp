#include<iostream>
using namespace std;

typedef struct employee
{
    int rollno;
    float salary;
    char favchar;
    int mobno;

}hii;
int main()
{
 hii chandu;
 hii rahul;
 chandu.rollno=14;
 chandu.salary=8000000;
 chandu.favchar='s';
 chandu.mobno=641;
 cout<<"for chandu"<<endl;
 cout<<"the rollno is:"<<chandu.rollno<<endl;
 cout<<"the salary is:"<<chandu.salary<<endl;
 cout<<"the favchar is:"<<chandu.favchar<<endl;
 cout<<"the mobno is:"<<chandu.mobno<<endl;

cout<<endl;
 
 rahul.mobno=212;
 rahul.favchar='t';
 rahul.salary=7200000;
 rahul.rollno=49;
 cout<<"for rahul"<<endl;
 cout<<"the rollno is:"<<rahul.rollno<<endl;
 cout<<"the salary is:"<<rahul.salary<<endl;
 cout<<"the favchar is:"<<rahul.favchar<<endl;
 cout<<"the mobno is:"<<rahul.mobno<<endl;


    return 0;
}