#include <iostream>
#include <bits/stdc++.h>
using namespace std;
typedef long long int lli;
int get(int n)
{
    if(n==1) return INT_MIN;
    int l=0 ,r=n;
    while(l<=r)
    {
        int mid=l+(r-l)/2;
        if(mid*mid==n)
        {
            return INT_MIN;
        }
        else if(mid*mid<n)
        {
            l=mid+1;
        }
        else
        {
            r=mid-1;
        }
    }
    return n;
}
int find(vector<int>& v,int n)
{
    int ans=INT_MIN;
    for(int i=0;i<n;i++)
    {
        int res=(v[i]<0?v[i]:get(v[i]));
        // cout<<ans<<" "<<res<<" "<<v[i]<<endl;
        if(ans<=res)
        {
            ans=res;
        }
        // cout<<res<<" "<<v[i]<<" "<<ans<<endl;
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
        vector<int>v;
        for(int i=0;i<n;i++)
        {
            int a;
            cin>>a;
            v.push_back(a);
        }
        int ans=find(v,n);
        cout<<ans<<endl;
    // }
    return 0;
}