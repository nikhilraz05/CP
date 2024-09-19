#include <iostream>
#include <bits/stdc++.h>
using namespace std;
typedef long long int lli;
string find(vector<pair<int,int>>& v,int n)
{
    int cntd=0,cntu=0,cntl=0,cntr=0;
    for(auto it:v)
    {
        if(it.first<0)
        {
            cntl++;
        }
        if(it.first>0)
        {
            cntr++;
        }
        if(it.second<0)
        {
            cntd++;
        }
        if(it.second>0)
        {
            cntu++;
        }
    }
    if(cntd>0 && cntu>0 && cntl>0 && cntr>0)
    {
         return "NO";
    }
    return "Yes";
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
        // cout<<"enter value"<<" "<<endl;
        vector<pair<int,int>>v;
        for(int i=0;i<n;i++)
        {
            int x,y;
            cin>>x>>y;
            v.push_back({x,y});
        }
        string ans=find(v,n);
        cout<<ans<<" "<<endl;
    }
    return 0;
}