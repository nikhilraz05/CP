#include <iostream>
#include <bits/stdc++.h>
using namespace std;
typedef long long int lli;
string find(vector<vector<char>> &v, int n, int m)
{
    string s = "vika";
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            if (v[i][j] == s[0])
            {
                int x = i, y = j;
                int l = 1;
                while (y < m)
                {
                    if (l >= 3)
                    {
                        return "YES";
                    }
                    if (v[x][y] == s[l])
                    {
                        l++;
                    }
                    y++;
                }
                if (l >= 3)
                {
                    return "YES";
                }
                x = i, y = j;
                l = 1;
                while (x < n)
                {
                    if (l >= 3)
                    {
                        return "YES";
                    }
                    if (v[x][y] == s[l])
                    {
                        l++;
                    }
                    x++;
                }
                if (l >= 3)
                {
                    return "YES";
                }
            }
        }
    }
    return "NO";
}
int main()
{
    int t;
    // cout << "Enter testcases" << " " << endl;
    cin >> t;
    while (t--)
    {
        int m, n;
        // cout << "ente m,n" << endl;
        cin >> n >> m;
        // cout << "enter values" << endl;
        vector<vector<char>> v;
        for (int i = 0; i < n; i++)
        {
            vector<char> v1;
            for (int j = 0; j < m; j++)
            {
                char a;
                cin >> a;
                v1.push_back(a);
            }
            cout << endl;
            v.push_back(v1);
        }
        string ans = find(v, n, m);
        cout << ans << " " << endl;
    }
    return 0;
}