#include <iostream>
#include <bits/stdc++.h>
using namespace std;
typedef long long int lli;
int find(vector<int>& v,int n,int k)
{
    bool valid=1;
    for(int i=1;i<n;i++)
    {
        if(v[i-1]>v[i])
        {
            valid=0;
        }
    }
    if(valid==0 && k<=1)
    {
        return 0;
    }
    if(valid==1 && k<=1)
    {
        return 1;
    }
    return 1;
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
        int ans=find(v,n,k);
        if(ans==0)
        {
            cout<<"NO"<<" "<<endl;
        }
        else
        {
            cout<<"YES"<<" "<<endl;
        }
    }
    return 0;
}