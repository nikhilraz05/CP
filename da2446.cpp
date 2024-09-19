#include <iostream>
#include <bits/stdc++.h>
using namespace std;
typedef long long int lli;
int find(vector<lli>& v1,vector<lli>& v2)
{
    lli first=-1 ,second=-1,third=-1;
    for(auto it:v2)
    {
        if(it>first)
        {
            second=first;
            first=it;
        }
        else if(it>=second && it<=first)
        {
            third=second;
            second=it;
        }
        else if(it>=third && it<=second)
        {
            third=it;
        }
    }
    lli sum=0;
    for(auto it:v1)
    {
        sum+=it;
    }
    cout<<first<<" "<<second<<" "<<third<<endl;
    if(sum>first+second) return 0;
    return 1;
}
int main()
{
    // int t;
    // cin>>t;
    // while(t--)
    // {
        int n;
        cin>>n;
        vector<lli>v1,v2;
        for(int i=0;i<n;i++)
        {
            lli a;
            cin>>a;
            v1.push_back(a);
        }
        for(int i=0;i<n;i++)
        {
            lli a;
            cin>>a;
            v2.push_back(a);
        }
        int ans=find(v1,v2);
        if(ans==1)
        {
            cout<<"YES"<<endl;
        }
        else
        {
            cout<<"NO"<<endl;
        }
    // }
    return 0;
}