#include <iostream>
#include <bits/stdc++.h>
using namespace std;
typedef long long int lli;
int find(int n, int m)
{
    return max(n,m);
}
int main()
{
    int t;
    // cout << "Enter testcases" << " " << endl;
    cin >> t;
    while (t--)
    {
        int n,m;
        cin>>n>>m;
        int ans=find(n,m);
        cout << ans << " " << endl;
    }
    return 0;
}