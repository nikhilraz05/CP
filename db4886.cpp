#include <iostream>
#include <bits/stdc++.h>
using namespace std;
typedef long long int lli;
int find(vector<pair<int,int>>& v,int n)
{
    int ans=0;
    int ind=-1;
    for(int i=0;i<n;i++)
    {
        if(v[i].first<11)
        {
            if(v[i].second>ans)
            {
                ans=v[i].second;
                ind=i+1;
            }
        }
    }
    return ind;
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
        int ans=find(v,n);
        cout<<ans<<" "<<endl;
    }
    return 0;
}