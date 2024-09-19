#include <iostream>
#include <bits/stdc++.h>
using namespace std;
typedef long long int lli;
int find(vector<int>& v,int n)
{
    int ans=1e9+7;
    int index=0;
    for(int i=0;i<n;i++)
    {
        if(ans>=v[i])
        {
            ans=v[i];
            index=i;
        }
    }
    int res=1;
    for(int i=0;i<n;i++)
    {
        if(i==index)
        {
            v[i]+=1;
        }
        res=res*v[i];
    }
    return res;
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
        vector<int>v;
        // cout<<"enter values"<<" "<<endl;
        for(int i=0;i<n;i++)
        {
            int a;
            cin>>a;
            v.push_back(a);
        }
        int  ans = find(v,n);
        cout << ans << " " << endl;
    }
    return 0;
}