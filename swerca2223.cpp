#include <iostream>
#include <bits/stdc++.h>
using namespace std;
typedef long long int lli;
int find(vector<int>& v,int n)
{
    int cnt=0;
    int prev=0;
    for(int i=0;i<n;i++)
    {
        if(v[i]-prev>=120)
        {
            cnt+=((v[i]-prev)/120);
        }
        prev=v[i];
    }
    int diff=1440-v[n-1];
    int a=diff/120;
    cnt+=a;
    if(cnt>=2)
    {
        return 1;
    }
    return 0;
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
        int ans = find(v,n);
        if(ans==0)
        {
            cout<<"NO"<<endl;
        }
        else
        {
            cout<<"YES"<<endl;
        }
    }
    return 0;
}