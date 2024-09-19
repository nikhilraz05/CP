#include <iostream>
#include <bits/stdc++.h>
using namespace std;
typedef long long int lli;
int find(vector<int>& v,int k)
{
    map<int,int>mp;
    for(auto it:v)
    {
        mp[it]++;
    }
    int ans=v.size();
    for(auto it:mp)
    {
        if(it.second>=k)
        {
            ans=min(ans,k-1);
        }
    }
    return ans;
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
        int ans=find(v,k);
        cout << ans << " " << endl;
    }
    return 0;
}