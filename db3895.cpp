#include <iostream>
#include <bits/stdc++.h>
using namespace std;
typedef long long int lli;
int find(vector<pair<int, int>> &v)
{
    sort(v.begin(), v.end());
    int k = 1;
    int mn = INT_MAX;
    for (int i = 0; i < v.size();)
    {
        // cout<<k<<" "<<i<<endl;
        if (k == v[i].first)
        {
            while (i<v.size() && k==v[i].first)
            {
                if (k == v[i].first)
                {
                    int prev = k - 1;
                    int trap = v[i].second;
                    if (trap % 2 == 0)
                    {
                        int a = trap / 2;
                        a = a - 1;
                        int c = v[i].first + a;
                        mn = min(mn, c);
                    }
                    else
                    {
                        int a = trap / 2;
                        int c = v[i].first + a;
                        mn = min(mn, c);
                    }
                }
                i++;
            }
        }
        k++;
    }
    return mn;
}
int main()
{
    int t;
    // cout << "Enter testcases" << " " << endl;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        vector<pair<int, int>> v;
        for (int i = 0; i < n; i++)
        {
            int a, b;
            cin >> a >> b;
            v.push_back({a, b});
        }
        int ans = find(v);
        cout << ans << endl;
    }
    return 0;
}