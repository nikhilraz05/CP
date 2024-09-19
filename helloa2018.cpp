#include <iostream>
#include <bits/stdc++.h>
using namespace std;
typedef long long int lli;
int find(int n,int m)
{
    if(n>=m) return m;
    lli a=pow(2,n);
    if(a>m) return m;
    int ans=m%a;
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
        int m;
        cin>>m;
        int ans=find(n,m);
        cout<<ans<<endl;
    // }
    return 0;
}