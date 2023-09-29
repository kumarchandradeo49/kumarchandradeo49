#include<iostream>
using namespace std;
int main()
{   
    // //****** selection control structure if-else,if else ladder ********
    // int age;
    // cout<<"enter age:";
    // cin>>age;
    // if(age<18)
    // {
    //     cout<<"you can't come to party"<<endl;
    // }
    // else if(age==18)
    // {
    //   cout<<"you can enter to party by kid pass"<<endl;
    // }
    // else
    // {
    //   cout<<"you are invited to the party";
    // }
    

    //****** selection control structure switch-case ********
    int age;
    cout<<"tell me your age"<<endl;
    cin>>age;
    switch(age)
    {
        case 18:cout<<"you are 18 now"<<endl;break;
        case 12:cout<<"you are 12 now"<<endl;break;
        case 22:cout<<"you are 22 now"<<endl;break;
        case 49:cout<<"you are 49 now"<<endl;break;
        default:cout<<"sorrybacche";
        
    }
  




    return 0;
}