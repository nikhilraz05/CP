#include <iostream>
#include <bits/stdc++.h>
using namespace std;
typedef long long int lli;
int find(int x)
{
    int a=log2(x);
    int ans=1;
    for(int i=0;i<a;i++)
    {
        ans=ans*2;
    }
    return ans;
}
int main()
{
    int t;
    // cout << "Enter testcases" << " " << endl;
    cin >> t;
    while (t--)
    {
        int x;
        cin >> x;
        int ans = find(x);
        cout << ans << " " << endl;
    }
    return 0;
}