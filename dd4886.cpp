#include <iostream>
#include <bits/stdc++.h>
using namespace std;
typedef long long int lli;
int find(vector<int>& v,int k)
{
    if(v.size()==1)
    {
        return 0;
    }
    sort(v.begin(),v.end());
    int i=0,j=1;
    int ans=0;
    for(;j<v.size();)
    {
        if(abs(v[j-1]-v[j])<=k)
        {
            int l=j-1;
            while(j<v.size() && abs(v[j-1]-v[j])<=k)
            {
                j++;
            }
            ans=max(ans,j-l+1);
        }
        j++;
    }
    return v.size()-ans+1;
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
        cout<<ans<<endl;
    }
    return 0;
}