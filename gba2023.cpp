#include <iostream>
#include <bits/stdc++.h>
using namespace std;
typedef long long int lli;
pair<int,vector<int>> find(vector<int>& v1,int n,int k)
{
    int ans=1;
    for(int i=0;i<n;i++)
    {
        if(ans>2023)
        {
            return {0,{}};
        }
        ans=ans*v1[i];
    }
    if(2023 % ans!=0)
    {
        return {0,{}};
    }
    vector<int>v;
    if(ans==2023)
    {
        if(k==1)
        {
            v.push_back(1);
            return {1,{v}};
        }
        if(k>1)
        {
            v.push_back(1);
            int m=k-1;
            for(int i=0;i<m;i++)
            {
                v.push_back(1);
            }
            return {1,{v}};
        }
    }
    if(ans==289)
    {
        if(k==1)
        {
            v.push_back(7);
            return {1,{v}};
        }
        if(k>1)
        {
            v.push_back(7);
            int m=k-1;
            for(int i=0;i<m;i++)
            {
                v.push_back(1);
            }
            return {1,{v}};
        }
    }
    if(ans==119)
    {
        if(k==1)
        {
            v.push_back(17);
            return {1,{v}};
        }
        if(k>1)
        {
            v.push_back(17);
            int m=k-1;
            for(int i=0;i<m;i++)
            {
                v.push_back(1);
            }
            return {1,{v}};
        }
    }
    if(ans==17)
    {
        if(k==1)
        {
            v.push_back(119);
            return {1,{v}};
        }
        if(k>1)
        {
            v.push_back(119);
            int m=k-1;
            for(int i=0;i<m;i++)
            {
                v.push_back(1);
            }
            return {1,{v}};
        }
    }
    if(ans==7)
    {
        if(k==1)
        {
            v.push_back(289);
            return {1,{v}};
        }
        if(k>1)
        {
            v.push_back(289);
            int m=k-1;
            for(int i=0;i<m;i++)
            {
                v.push_back(1);
            }
            return {1,{v}};
        }
    }
    if(ans==1)
    {
        if(k==1)
        {
            v.push_back(2023);
            return {1,{v}};
        }
        if(k>1)
        {
            v.push_back(2023);
            int m=k-1;
            for(int i=0;i<m;i++)
            {
                v.push_back(1);
            }
            return {1,{v}};
        }
    }
    return {0,{}};
}
int main()
{
    int t;
    // cout << "Enter testcases" << " " << endl;
    cin >> t;
    while (t--)
    {
        int n,k;
        cin>>n>>k;
        vector<int>v;
        for(int i=0;i<n;i++)
        {
            int a;
            cin>>a;
            v.push_back(a);
        }
        pair<int,vector<int>>ans=find(v,n,k);
        if(ans.first==0)
        {
            cout<<"NO"<<" "<<endl;
        }
        else
        {
            cout<<"YES"<<" "<<endl;
            for(auto it:ans.second)
            {
                cout<<it<<" ";
            }
        }
        cout<<endl;
    }
    return 0;
}