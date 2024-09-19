#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int find(vector<int>& v,int n)
{
    int prev=0,curr=0,pi=0,ci=0;
    int ans=0;
    for(int i=0;i<n;i++)
    {
        if(v[i]==1)
        {
            prev=1;
            curr=1;
            pi=i;
            ci=i;
        }
        else
        {
            if(prev==1)
            {
                curr=0;
                ci=i;
                ans++;
            }
        }
    }
    if(prev==1 && curr==0)
    {
        return ans-(ci-pi);
    }
    return ans;
}
int main()
{
    // cout<<"enter testcases"<<" "<<endl;
    int t;
    cin>>t;
    while(t--)
    {
       int n;
    //    cout<<"enter n"<<" "<<endl;
       cin>>n;
    //    cout<<"enter values"<<" "<<endl;
       vector<int>v;
       for(int i=0;i<n;i++)
       {
         int a;
         cin>>a;
         v.push_back(a);
       }
       int ans=find(v,n);
       cout<<ans<<" "<<endl;
    }
    return 0;
}