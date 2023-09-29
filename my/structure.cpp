#include<iostream>
using namespace std;
typedef struct hostellers
{
   int roomno;
   int rollno;
   char favchar;
   int mob;
}HH;
int main()
{
    HH Hritik;
    HH Chandu;
    Hritik.roomno=1002;
    Chandu.roomno=1012;
    Hritik.rollno=001;
    Hritik.favchar='N';
    Chandu.rollno=014;
    Chandu.favchar='C';
    Hritik.mob=423;
    Chandu.mob=07;   
cout<<"for chandu:"<<endl;
cout<<Chandu.roomno<<endl;
cout<<Chandu.rollno<<endl;
cout<<Chandu.favchar<<endl;
cout<<Chandu.mob<<endl;
cout<<"for Hritik:"<<endl;
cout<<Hritik.roomno<<endl;
cout<<Hritik.rollno<<endl;
cout<<Hritik.favchar<<endl;
cout<<Hritik.mob<<endl;
return 0;




}