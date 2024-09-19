#include <iostream>
#include <bits/stdc++.h>
using namespace std;
typedef long long int lli;
int find(vector<int>& v,int n)
{
    vector<int>v1(n);
    if(v[0]==1)
    {
        v1[0]=2;
    }
    else
    {
        v1[0]=1;
    }
    int prev=v1[0];
    for(int i=1;i<n;i++)
    {
        if(prev+1==v[i])
        {
            v1[i]=prev+2;
            prev=v1[i];
        }
        else
        {
            v1[i]=prev+1;
            prev=v1[i];
        }
    }
    return v1[n-1];
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
        for(int i=0;i<n;i++)
        {
            int a;
            cin>>a;
            v.push_back(a);
        }
        int ans = find(v,n);
        cout << ans << " " << endl;
    }
    return 0;
}