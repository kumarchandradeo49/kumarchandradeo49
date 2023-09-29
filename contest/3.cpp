#include<bits/stdc++.h>
using namespace std;
int main()
{
    int q;
    cin>>q;
    while(q--)
    {
        int n,k;
        cin>>n>>k;
        char a[n];
        vector<int>v;
        for(int i=0;i<n;i++)
        {
           cin>>a[i];
        }
        int count=0;
        for(int i=0;i<n;i++)
        {
           if(a[i]=='B')
           {
            int x=i;
             v.push_back(x);
           }
        }
        for(int i=0;i<v.size();i++)
        {
            if(v.size()%2==0)
            {
            if(v[i+1]-v[i]>=k)
            {
                count++;
                i++;
            }
            }
            else
            if(v[i+1]-v[i]>=k)
            {
                count++;
                i++;
            }
        }
        cout<<count<<endl;

        
    }
}