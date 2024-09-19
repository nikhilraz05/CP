#include <iostream>
#include <bits/stdc++.h>
using namespace std;
typedef long long int lli;
lli find(lli n)
{
    n=n+1;
    lli ans=n*n;
    return ans+1;
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
        lli ans=find(n);
        cout << ans << " " << endl;
    }
    return 0;
}