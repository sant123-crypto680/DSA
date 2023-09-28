#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,x;
    cin>>n;
    
    vector<int>v;  
    for(int i=0;i<n;i++)
    {
        cin>>x;
        v.push_back(x);
    }
    cout<<"size"<<" "<<v.size()<<endl;
    cout<<"element"<<endl;
    for(int i=0;i<n;i++)
    {
        cout<<v[i];
        cout<<endl;
    }
    v.push_back(8);
    cout<<"size"<<" "<<v.size()<<endl;
    cout<<"element"<<endl;
    for(int i=0;i<v.size();i++)
    {
        cout<<v[i];
        cout<<endl;
    }
    v.pop_back();
      cout<<"size"<<" "<<v.size()<<endl;
    cout<<"element"<<endl;
    for(int i=0;i<v.size();i++)
    {
        cout<<v[i];
        cout<<endl;
    }
    return 0;
}