#include <iostream>
#include <bits/stdc++.h>
using namespace std;
typedef long long int lli;
string find(vector<int>& v,int n)
{
    if(n==1)
    {
        return "YES";
    }
    int sum=0;
    int req=0;
    for(auto it:v)
    {
        req+=it;
    }
    req=req/n;
    for(int i=0;i<n;i++)
    {
        if(v[i]>=req)
        {
            int a=v[i]-req;
            sum+=a;
        }
        else
        {
            int a=req-v[i];
            if(sum>=a)
            {
                sum-=a;
            }
            else
            {
                return "NO";
            }
        }
    }
    return "YES";
}
int main()
{
    int t;
    // cout << "Enter testcases" << " " << endl;
    cin >> t;
    while (t--)
    {
        int n;
        cin>>n;
        vector<int>v;
        for(int i=0;i<n;i++)
        {
            int a;
            cin>>a;
            v.push_back(a);
        }
        string ans=find(v,n);
        cout << ans << " " << endl;
    }
    return 0;
}