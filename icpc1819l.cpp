#include <iostream>
#include <bits/stdc++.h>
using namespace std;
typedef long long int lli;
int find(vector<int>& v,vector<int>& t,int n)
{
    int ans=0;
    map<int,pair<int,int>>mp;
    for(int i=0;i<n;i++)
    {
        if(mp.find(v[i])!=mp.end())
        {
            if(mp[v[i]].first>t[i])
            {
                ans+=t[i];
                mp[v[i]]={t[i],1};
            }
            else
            {
                if(mp[v[i]].second==0)
                {
                    mp[v[i]]={mp[v[i]].first,1};
                    ans+=mp[v[i]].first;
                }
            }
        }
        else
        {
            mp[v[i]]={t[i],0};
        }
        if(mp.size()==0)
        {
            mp[v[i]]={t[i],0};
        }
    }
    return ans;
}
int main()
{
    // int t;
    // // cout << "Enter testcases" << " " << endl;
    // cin >> t;
    // while (t--)
    // {
        int n,k;
        cin>>n>>k;
        vector<int>v,t;
        for(int i=0;i<n;i++)
        {
            int a;
            cin>>a;
            v.push_back(a);
        }
        for(int i=0;i<n;i++)
        {
            int a;
            cin>>a;
            t.push_back(a);
        }
        int ans=find(v,t,n);
        cout<<ans<<endl;
    // }
    return 0;
}