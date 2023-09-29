#include<bits/stdc++.h>
using namespace std;
void printVec(vector<int> v)
{
    cout<<"size:"<<v.size()<<endl;
    for(int i=0;i<v.size();i++)
    {
        cout<<v[i]<<" ";
    }
    cout<<endl;

}
int main()
{
 vector<int> v;
 int n;
 cin>>n;
 for(int i=0;i<n;i++)
 {
    int x;
    cin>>x;
    // printVec(v);
    v.push_back(x);
 }
 printVec(v);

// vector<int>v(5);
// v.push_back(49);
// v.push_back(67);
// printVec(v);

// vector<int>v(5,641);
// v.push_back(49);
// v.push_back(67);
// printVec(v);

// vector<int>v;
// v.push_back(49);
// v.push_back(67);
// printVec(v);

// vector<int>v(5,56);
// v.push_back(49);
// v.push_back(67);
// v.push_back(65);
// v.push_back(6);  //O(1)
// v.pop_back();  //O(1)



// vector<int> v2=v; //O(n)
// v.push_back(641);
// printVec(v);
// v2.push_back(642);
// printVec(v2);
}
