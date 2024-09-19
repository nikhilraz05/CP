#include <iostream>
#include <bits/stdc++.h>
using namespace std;
typedef long long int lli;
int find(vector<pair<int,int>>& v,int n)
{
    int ans=0;
    for(int i=0;i<n;i++)
    {
        if(v[i].first>v[i].second)
        {
            ans++;
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
        int n;
        // cout << "ente n" << endl;
        cin >> n;
        // cout<<"enter values"<<endl;
        vector<pair<int,int>>v;
        for(int i=0;i<n;i++)
        {
            int a,b;
            cin>>a>>b;
            v.push_back({a,b});
        }
        int ans = find(v,n);
        cout << ans << " " << endl;
    }
    return 0;
}