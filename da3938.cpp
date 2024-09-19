#include <iostream>
#include <bits/stdc++.h>
using namespace std;
typedef long long int lli;
int find(int n,int a,int b)
{
    int x=n/2;
    int ans=x*b+(n-2*x)*a;
    return min({ans,a*n});
}
int main()
{
    int t;
    // cout << "Enter testcases" << " " << endl;
    cin >> t;
    while (t--)
    {
        int n,a,b;
        cin>>n>>a>>b;
        int ans = find(n,a,b);
        cout << ans << " " << endl;
    }
    return 0;
}