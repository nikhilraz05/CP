#include <iostream>
#include <bits/stdc++.h>
using namespace std;
typedef long long int lli;
string find(vector<string> &v, int k, int n)
{
    for (auto it : v)
    {
        cout << it << " ";
    }
    return "";
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
        int k = 4 * n - 2;
        vector<string> v;
        for (int i = 0; i < k; i++)
        {
            string s;
            cin >> s;
            v.push_back(s);
        }
        string ans = find(v, k, n);
        cout << ans <<endl;
    }
    return 0;
}