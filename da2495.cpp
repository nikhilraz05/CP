#include <iostream>
#include <bits/stdc++.h>
using namespace std;
typedef long long int lli;
int find(vector<int>& v,int d)
{
    int prev=v[0]-d;
    int f=v[0]+d;
    int cnt=1;
    for(int i=1;i<v.size();i++)
    {
        // cout<<f<<" "<<cnt<<endl;
        if(f<v[i]-d)
        {
            cnt+=2;
        }
        if(f==v[i]-d)
        {
            cnt++;
        }
        f=v[i]+d;
    }
    cnt++;
    return cnt;
}
int main()
{
    // int t;
    // // cout << "Enter testcases" << " " << endl;
    // cin >> t;
    // while (t--)
    // {
        int n,d;
        cin>>n>>d;
        vector<int>v;
        for(int i=0;i<n;i++)
        {
            int a;
            cin>>a;
            v.push_back(a);
        }
        int ans=find(v,d);
        cout<<ans<<endl;
    // }
    return 0;
}