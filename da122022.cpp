#include <iostream>
#include <bits/stdc++.h>
using namespace std;
typedef long long int lli;
string find(string &s, int n)
{
    int cnt = 0;
    for (auto it : s)
    {
        if (it == '1')
        {
            cnt++;
        }
    }
    cnt = cnt / 2;
    string res;
    for (int i = 0; i < n; i++)
    {
        if (i == 0)
            continue;
        if (s[i] == '1')
        {
            if (cnt > 0)
            {
                cnt--;
                res += '-';
            }
            else
            {
                res+='+';
            }
        }
        else
        {
            res+='+';
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
        int n;
        // cout << "enter n" << " " << endl;
        cin >> n;
        string s;
        // cout << "enter s" << " " << endl;
        cin >> s;
        string ans = find(s, n);
        cout << ans << " " << endl;
    }
    return 0;
}