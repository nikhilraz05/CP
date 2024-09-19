#include <iostream>
#include <bits/stdc++.h>
using namespace std;
typedef long long int lli;
vector<int>find(int n,int m,int k)
{
    vector<int>v;
    int i=n;
    for(;i>m;i--)
    {
        v.push_back(i);
    }
    for(int j=1;j<=m;j++)
    {
        v.push_back(j);
    }
    return v;
}
int main()
{
    int t;
    // cout << "Enter testcases" << " " << endl;
    cin >> t;
    while (t--)
    {
        int n,m,k;
        cin>>n>>m>>k;
        vector<int>ans=find(n,m,k);
        for(auto it:ans)
        {
            cout<<it<<" ";
        }
        cout<<endl;
    }
    return 0;
}