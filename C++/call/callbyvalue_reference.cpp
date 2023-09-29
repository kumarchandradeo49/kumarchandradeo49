#include<iostream>
using namespace std;
//  int swap(int a,int b)
//  {
//     int temp;
//     temp=a;
//     a=b;
//     b=temp;
//  }
// int main()
// {
//   int x=10,y=6;
//   cout<<"the value of x is "<<x<<"and y is "<<y<<endl;

//   swap(x,y);
//   cout<<"the swap value of x is"<<x<<"and y is"<<y<<endl;  //this will not swap
// return 0;
// }

// int swap(int *a,int *b)   //call by reference
//  {
//     int temp;
//     temp=*a;
//     *a=*b;
//     *b=temp;
//  }
//  int main()
// {
//   int x=10,y=6;
//   cout<<"the value of x is"<<x<<"and y is"<<y<<endl;

//   swap(&x,&y);                         //this will swap a and b
//   cout<<"the swap value of x is"<<x<<"and y is"<<y<<endl; 

//   return 0;
//}


// //call by reference using c++ reference variable
// int swap(int &a,int &b)  
//  {
//     int temp;
//     temp=a;
//     a=b;
//     b=temp;
//  }
//  int main()
// {
//   int x=10,y=6;
//   cout<<"the value of x is"<<x<<"and y is"<<y<<endl;

//   swap(x,y);                         //this will swap a and b
//   cout<<"the swap value of x is"<<x<<"and y is"<<y<<endl; 

//   return 0;
// }


int &swap(int &a,int &b)  
 {
    int temp;
    temp=a;
    a=b;
    b=temp;
    return a;
 }
 int main()
{
  int x=10,y=6;
  cout<<"the value of x is"<<x<<"and y is"<<y<<endl;

  swap(x,y)=641;                         
  cout<<"the swap value of x is"<<x<<"and y is"<<y<<endl; 

  return 0;
}
