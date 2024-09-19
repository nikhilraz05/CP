#include <iostream>
#include <bits/stdc++.h>
using namespace std;
typedef long long int lli;
lli find(int a, int b, vector<int> &v)
{
    lli sum = 0;
    if (b > 1)
    {
        lli d = b - 1;
        sum += d;
        b = b - d;
    }
    for (int i = 0; i < v.size();)
    {
        lli k = min(a, b + v[i]);
        b=k;
        lli l = k - 1;
        sum += l;
        b=b-l;
        if(i==v.size()-1)
        {
            sum+=1;
        }
        i++;
    }
    return sum;
}
int main()
{
    int t;
    // cout << "Enter testcases" << " " << endl;
    cin >> t;
    while (t--)
    {
        int a, b, n;
        cin >> a >> b >> n;
        vector<int> v;
        for (int i = 0; i < n; i++)
        {
            int d;
            cin >> d;
            v.push_back(d);
        }
        lli ans = find(a, b, v);
        cout << ans << endl;
    }
    return 0;
}