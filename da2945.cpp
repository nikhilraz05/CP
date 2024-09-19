#include <iostream>
#include <bits/stdc++.h>
using namespace std;
typedef long long int lli;
int find(int a, int b, int c)
{
    // cout<<a<<" "<<b<<" "<<c<<endl;
    if (a == 0)
    {
        return min(b,c);
    }
    if (b == 0)
    {
        return min(a,c);
    }
    if (c == 0)
    {
        return min(a,b);
    }
    int mx = max({a, b, c});
    int mn = min({a, b, c});
    int md = -1;
    if (mx == a && mn == b)
    {
        md = c;
    }
    if (mx == a && mn == c)
    {
        md = b;
    }
    if (mx == c && mn == b)
    {
        md = a;
    }
    if(mx==c && mn==a)
    {
        md=b;
    }
    if(mx==b && mn==a)
    {
        md=c;
    }
    if(mx==b && mn==b)
    {
        md=a;
    }
    int ans = 0;
    mx = mx - mn;
    md = md - mn;
    ans += mn;
    if(mx>=0 && md>=0 && mn>=0)
    {
        ans += find(mx, md, mn);
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
        int a, b, c;
        cin >> a >> b >> c;
        if ((a + b + c) % 2 == 1)
        {
            cout << -1 << endl;
        }
        else
        {
            int ans = find(a, b, c);
            cout << ans << " " << endl;
        }
    }
    return 0;
}