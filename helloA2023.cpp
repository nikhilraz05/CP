#include <iostream>
#include <bits/stdc++.h>
using namespace std;
typedef long long int lli;
int find(vector<char>& v,int n)
{
    int rmin=INT_MAX,lmax=-1;
    for(int i=0;i<n;i++)
    {
        if(v[i]=='L')
        {
            lmax=max(lmax,i+1);
        }
        else
        {
            rmin=min(rmin,i+1);
        }
    }
    if(rmin==INT_MAX || lmax==-1)
    {
        return -1;
    }
    if(rmin<lmax)
    {
        return 0;
    }
    return lmax;
}
int main()
{
    int t;
    // cout << "Enter testcases" << " " << endl;
    cin >> t;
    while (t--)
    {
        int n;
        // cout << "ente n" << endl;
        cin >> n;
        vector<char>v;
        // cout<<"enter v"<<" "<<endl;
        for(int i=0;i<n;i++)
        {
            char a;
            cin>>a;
            v.push_back(a);
        }
        int ans = find(v,n);
        cout << ans << " " << endl;
    }
    return 0;
}