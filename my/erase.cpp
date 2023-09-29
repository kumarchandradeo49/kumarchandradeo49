#include<bits/stdc++.h>
using namespace std;
void printvec(vector<int> v)
{
    cout<<"v.size()";
    for(int i=0;i<v.size();i++)
    {
        cout<<v[i]<<" ";
    }
    
}
int main()
{
    vector<int> v;
    int N;
    for(int i=0;i<N;i++)
    {
        int m;
        cin>>v[i];
        v.push_back(m);
    }
    int x;
    cin>>x;
    v.erase(v.begin()+(x-1));
    int a,b;
    v.erase(v.begin()+(a-1),v.begin()+(b-1));
    printvec(v);
    
}