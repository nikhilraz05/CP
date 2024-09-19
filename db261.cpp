#include <iostream>
#include <bits/stdc++.h>
using namespace std;
typedef long long int lli;
vector<lli> find(vector<int>& v,int n,vector<int>& q,int m)
{
    sort(v.begin(),v.end());
    vector<int>pre(n,0);
    pre[0]=v[0];
    for(int i=1;i<n;i++)
    {
        pre[i]=pre[i-1]+v[i];
    }
    vector<lli>ans;
    for(int i=0;i<m;i++)
    {
        int a=q[i];
        int x=pre[n-1];
        int y=pre[n-1-(a-1)];
        lli sum=0;
        sum+=(x-y);
        sum+=pre[n-1-a];
        ans.push_back(sum);
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
        int m;
        cin>>m;
        vector<int>q;
        for(int i=0;i<m;i++)
        {
            int a;
            cin>>a;
            q.push_back(a);
        }
        vector<lli>ans=find(v,n,q,m);
        for(auto it:ans)
        {
            cout<<it<<endl;
        }
        cout<<endl;
    // }
    return 0;
}