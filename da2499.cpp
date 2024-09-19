#include <iostream>
#include <bits/stdc++.h>
using namespace std;
typedef long long int lli;
int find(vector<char> &v, int k)
{
    
}
int main()
{
    // int t;
    // // cout << "Enter testcases" << " " << endl;
    // cin >> t;
    // while (t--)
    // {
    int n, k;
    cin >> n >> k;
    vector<char> v;
    for (int i = 0; i < n; i++)
    {
        char a;
        cin >> a;
        v.push_back(a);
    }
    int ans = find(v, k);
    cout << ans << endl;
    // }
    return 0;
}