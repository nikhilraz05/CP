#include <iostream>
#include <bits/stdc++.h>
using namespace std;
typedef long long int lli;
vector<int> v1, v2;
int find(vector<int> &v, int n)
{
    sort(v.begin(), v.end());
    int i = 0, j = n - 1;
    if (v[i] == v[j])
        return -1;
    while (i < j)
    {
        if (v[i] * 2 >= v[j])
        {
            break;
        }
        i++;
    }
    for (int k = 0; k < i; k++)
    {
        v1.push_back(v[k]);
    }
    for (int k = i ; k < n; k++)
    {
        v2.push_back(v[k]);
    }

    return 0;
}
int main()
{
    int t;
    // cout << "Enter testcases" << " " << endl;
    cin >> t;
    while (t--)
    {
        int n;
        // cout << "ente n" << " " << endl;
        cin >> n;
        // cout << "enter values" << " " << endl;
        vector<int> v;
        for (int i = 0; i < n; i++)
        {
            int a;
            cin >> a;
            v.push_back(a);
        }
        int ans = find(v, n);
        if (ans == -1)
        {
            cout << ans << " " << endl;
        }
        else
        {
            cout << v1.size() << " " << v2.size() << " " << endl;
            for (auto it : v1)
            {
                cout << it << " ";
            }
            cout << endl;
            for (auto it : v2)
            {
                cout << it << " ";
            }
            cout << endl;
        }
        v1.clear();
        v2.clear();
    }
    return 0;
}