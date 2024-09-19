#include <iostream>
#include <bits/stdc++.h>
using namespace std;
typedef long long int lli;
pair<int,pair<int,int>> find(vector<int>& v,int n)
{
    int index=-1,cnt=0,cnt0=0;
    for(int i=0;i<n;i++)
    {
       if(v[i]<0)
       {
         index=i+1;
         cnt++;
       }
       else if(v[i]==0)
       {
         cnt0++;
       }
       else
       {
         index=i+1;
       }
    }
    if(cnt0>0 || cnt%2!=0)
    {
        return {0,{0,0}};
    }
    return {1,{index,0}};  
}
int main()
{
    int t;
    // cout<<"Enter testcases";
    cin >> t;
    while (t--)
    {
        int n;
        // cout<<"enter n"<<" "<<endl;
        cin>>n;
        vector<int>v;
        // cout<<"enter value"<<" "<<endl;
        for(int i=0;i<n;i++)
        {
            int a;
            cin>>a;
            v.push_back(a);
        }
        pair<int,pair<int,int>>p=find(v,n);
        int a=p.first;
        if(a==0)
        {
            cout<<a<<" "<<endl;
        }
        else
        {
            cout<<a<<" "<<endl;
            cout<<p.second.first<<" "<<p.second.second<<" "<<endl;
        }
    }
    return 0;
}