#include <iostream>
#include <bits/stdc++.h>
using namespace std;
typedef long long int lli;
int find(vector<int>& v)
{
    int cnt1=0,cnt2=0;
    int ans1=0,ans2=0;
    for(int i=0;i<v.size();i++)
    {
        if(v[i]==1)
        {
            ans2=max(ans2,cnt2);
            cnt1++;
            cnt2=0;
        }
        else
        {
            ans1=max(ans1,cnt1);
            cnt2++;
            cnt1=0;
        }
    }
    ans2=max(ans2,cnt2);
    ans1=max(ans1,cnt1);
    return 2*min(ans1,ans2);
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
        int ans=find(v);
        cout<<ans<<endl;
    // }
    return 0;
}