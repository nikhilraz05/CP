#include <iostream>
#include <bits/stdc++.h>
using namespace std;
typedef long long int lli;
string find(int n)
{
    map<int, char> mp;
    int i = 1;
    for (char ch = 'a'; ch <= 'z'; ch++)
    {
        if(i>26) break;
        mp[i] = ch;
        i++;

    }
    // for(auto it:mp)
    // {
    //     cout<<it.first<<" "<<it.second<<" "<<endl;
    // }
    string x;
    if (n > 28)
    {
        int a = n / 26;
        int b = n % 26;
        if (a > 1)
        {
            x += mp[b];
            x += 'z';
            x += 'z';
        }
        else
        {
            int a1 = 1;
            b = b - 1;
            x += mp[a1];
            x += mp[b];
            x += 'z';
        }
    }
    else
    {
        int l = n - 2;
        int j = 1;
        int k = 1;
        x += mp[j];
        x += mp[k];
        x += mp[l];
    }
    return x;
}
int main()
{
    int t;
    // cout << "Enter testcases";
    cin >> t;
    while (t--)
    {
        int n;
        // cout << "enter n" << " " << endl;
        cin >> n;
        string ans = find(n);
        cout<<ans<<" "<<endl;
    }
    return 0;
}