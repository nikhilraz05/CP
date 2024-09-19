#include <iostream>
#include <bits/stdc++.h>
using namespace std;
typedef long long int lli;
int find(vector<int>& v)
{
    int ans=0;
    int cnt=0;
    int res=-1;
    int cnt1=0;
    for(int i=0;i<v.size();i++)
    {
        if(v[i]==0 )
        {
            if(cnt1==0)
            {
                res=i+1;
                cnt1=1;
            }
            ans=max(ans,cnt);
            cnt=0;
        }
        else
        {
            cnt++;
        }
    }
    if(cnt>0)
    {
        if(res==-1)
        {
            return cnt;
        }
        if(res!=-1)
        {
            return max(ans,cnt+(res-1));
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