#include <iostream>
#include <bits/stdc++.h>
using namespace std;
typedef long long int lli;
int find(int a, int b, int c, int d)
{
    if (b == d)
    {
        return abs(c - a);
    }
    if (b < d)
    {
        int ans = 0;
        int h = d - b;
        int w=c-h;
        ans += abs(h);
        if (w <= a)
        {
            ans += abs(w-a);
        }
        else
        {
            return -1;
        }
        return ans;
    }
    int ans = 0;
    int h = b-d;
    int w = a-h;
    ans += abs(h);
    if (w <= c)
    {
        ans += abs(w - c);
    }
    else
    {
        return -1;
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
        int a, b, c, d;
        // cout << "ente a,b,c,d" << endl;
        cin >> a >> b >> c >> d;
        int ans = find(a, b, c, d);
        cout << ans << " " << endl;
    }
    return 0;
}