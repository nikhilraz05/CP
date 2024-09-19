#include <iostream>
#include <bits/stdc++.h>
using namespace std;
typedef long long int lli;
int find(vector<int>& v1,vector<int>& v2)
{
    int mn1=INT_MAX;
    for(auto it:v1)
    {
        mn1=min(mn1,it);
    }
    int mn2=INT_MAX;
    for(auto it:v2)
    {
        mn2=min(mn2,it);
    }
    if(mn1==mn2)
    {
        return mn1;
    }
    if(mn1<mn2)
    {
        string s=to_string(mn1)+to_string(mn2);
        int a=stoi(s);
        return a;
    }
    if(mn1>mn2)
    {
        string s=to_string(mn2)+to_string(mn1);
        int a=stoi(s);
        return a;
    }
    return 0;
}
int main()
{
        int n,m;
        cin>>n>>m;
        vector<int>v1;
        for(int i=0;i<n;i++)
        {
            int a;
            cin>>a;
            v1.push_back(a);
        }
        vector<int>v2;
        for(int i=0;i<m;i++)
        {
            int a;
            cin>>a;
            v2.push_back(a);
        }
        int ans=find(v1,v2);
        cout<<ans<<endl;
    return 0;
}