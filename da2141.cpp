#include <iostream>
#include <bits/stdc++.h>
using namespace std;
typedef long long int lli;
pair<int,vector<int>>find(vector<int>& v,int n)
{
    int sum=0;
    int i=0;
    int mx=INT_MIN;
    int mn=INT_MAX;
    int mxi=-1,mni=-1;
    for(int j=0;j<n;j++)
    {
        if(mx<=v[j])
        {
            mx=v[j];
            mxi=j;
        }
        if(mn>=v[j])
        {
            mn=v[j];
            mni=j;
        }
    }
    for(;i<n;i++)
    {
        if(sum==v[i])
        {
            break;
        }
        sum+=v[i];
    }
    if(i>=n)
    {
        return {1,{v}};
    }
    if(mx==mn)
    {
        return {0,{}};
    }
    vector<int>ans;
    ans.push_back(v[mxi]);
    for(int i=0;i<n;i++)
    {
        if(i==mxi || i==mni)
        {
            continue;
        }
        ans.push_back(v[i]);
    }
    ans.push_back(v[mni]);
    return {1,{ans}};
}
int main()
{
    int t;
    // cout << "Enter testcases" << " " << endl;
    cin >> t;
    while (t--)
    {
        int n;
        cin>>n;
        vector<int>v;
        for(int i=0;i<n;i++)
        {
            int a;
            cin>>a;
            v.push_back(a);
        }
        pair<int,vector<int>>res=find(v,n);
        if(res.first==0)
        {
            cout<<"NO"<<endl;
        }
        else
        {
            cout<<"YES"<<endl;
            for(auto it:res.second)
            {
                cout<<it<<" ";
            }
        }
        cout<<endl;
    }
    return 0;
}