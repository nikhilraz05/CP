#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int find(vector<int>& v,int n)
{
    map<int,int>mp;
    for(auto it:v)
    {
        mp[it]++;
    }
    int cnt=0;
    for(auto it:mp)
    {
        if(it.second>=3)
        {
            cnt+=(it.second/3);
        }
    }
    return cnt;
}
int main()
{
    // cout<<"enter testcases";
    int t;
    cin>>t;
    while(t--)
    {
       int n;
    //    cout<<"enter numbers";
       cin>>n;
       vector<int>v;
       for(int i=0;i<n;i++)
       {
        // cout<<"enter value"<<" "<<endl;
        int a;
        cin>>a;
        v.push_back(a);
       }
       int ans=find(v,n);
       cout<<ans<<" "<<endl;
    }
    return 0;
}