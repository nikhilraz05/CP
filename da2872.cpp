#include <iostream>
#include <bits/stdc++.h>
using namespace std;
typedef long long int lli;
int find(string &s)
{
    map<char, int> mp;
    for (auto it : s)
    {
        mp[it]++;
    }
    if (mp.size() == 1)
        return -1;
    int ans = 0;
    int cnt = 0;
    for (auto it : mp)
    {
        if (it.second % 2 == 0 && cnt == 0)
        {
            cnt++;
            it.second-=1;
        }
        ans+=it.second;
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
        string s;
        // cout << "enter s" << " " << endl;
        cin >> s;
        int ans = find(s);
        cout << ans << " " << endl;
    }
    return 0;
}