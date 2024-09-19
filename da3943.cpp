#include <iostream>
#include <bits/stdc++.h>
using namespace std;
typedef long long int lli;
int gcd(int a, int b)
{
    while (b != 0)
    {
        int temp = b;
        b = a % b;
        a = temp;
    }
    return a;
}
int find(int x)
{
    int ans = 0;
    int res = -1;
    for (int i = 1; i < x; i++)
    {
        int a = gcd(x, i);
        if (res <= a + i)
        {
            if (ans <= a && res<=x-a)
            {
                ans = a;
                res = x-a ;
            }
        }
    }
    return res;
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