#include <iostream>
#include <bits/stdc++.h>
using namespace std;
typedef long long int lli;
int find(vector<pair<int,int>>& v)
{
    int a=v[0].first;
    int b=v[0].second;
    int ans=0;
    for(int i=1;i<4;i++)
    {
       int a1=v[i].first;
       int b1=v[i].second;
       ans=max({ans,abs(a1-a),abs(b1-b)});
       a=a1;
       b=b1;
    }
   return ans*ans;
}
int main()
{
    int t;
    // cout<<"Enter testcases";
    cin >> t;
    while (t--)
    {
        // int n;
        // cout<<"enter n"<<" "<<endl;
        // cin >> n;
        // cout<<"enter value"<<" "<<endl;
        vector<pair<int,int>>v;
        for(int i=0;i<4;i++)
        {
            int a,b;
            cin>>a>>b;
            v.push_back({a,b});
        }
        int ans = find(v);
        cout<<ans<<" "<<endl;
    }
    return 0;
}