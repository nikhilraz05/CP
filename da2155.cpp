#include <iostream>
#include <bits/stdc++.h>
using namespace std;
typedef long long int lli;
int find(vector<pair<int,int>>& v,int n)
{
    int a=v[0].first;
    int b=v[0].second;
    int ans=a;
    for(int i=1;i<n;i++)
    {
        if(v[i].first>=a)
        {
            if(v[i].second>=b)
            {
                return -1;
            }
            else
            {
                ans=a;
            }
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
        // cout<<"enter n"<<" "<<endl;
        cin>>n;
        vector<pair<int,int>>v;
        // cout<<"enter a,b"<<" "<<endl;
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