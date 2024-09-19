#include <iostream>
#include <bits/stdc++.h>
using namespace std;
typedef long long int lli;
int find(vector<pair<int,int>>& v)
{
    int ans=0;
    for(auto it:v)
    {
        ans=max(ans,it.first+it.second);
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
        int n;
        cin>>n;
        vector<pair<int,int>>v;
        for(int i=0;i<n;i++)
        {
            int a,b;
            cin>>a>>b;
            v.push_back({a,b});
        }
        int ans=find(v);
        cout<<ans<<" ";
        cout<<endl;
    // }
    return 0;
}