#include<iostream>
using namespace std;
int main()
{
    int q;
    cin>>q;
    while(q--)
    {  
       string s1="abc";
      string s;
      cin>>s;
      if(s==s1)
      {
        cout<<"YES"<<endl;
      }
      else 
      for(int i=0;i<1;i++)
      {
      
       if(s1[i]==s[i] || s1[i+1]==s[i+1] || s1[i+2]==s[i+2])
      {
        cout<<"YES"<<endl;
      }
      else
      cout<<"NO"<<endl;
      }
      

    

    

    }
}