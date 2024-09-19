#include <iostream>
#include <bits/stdc++.h>
using namespace std;
typedef long long int lli;
string find(string &s, int n)
{
    string res;
    for(int i=3;i<55;i++)
    {
        if(i%3==0)
        {
            res+='F';
        }
        if(i%5==0)
        {
            res+='B';
        }
    }
    // map<char,int>mp;
    // for (char ch : s) {
    //     mp[ch]++;
    // }

    // int i = 0, j = 0;

    // for (; j < res.size(); j++) {
    //     if (mp.find(res[j]) != mp.end()) {
    //         mp[res[j]]--;
    //         if (mp[res[j]] == 0) {
    //             mp.erase(res[j]);
    //         }
    //     }
        
    //     // Print i and j for debugging
    //     // std::cout << i << " " << j << std::endl;

    //     while (i <= j && (j - i + 1) == n) {
    //         if (mp.size() == 0) {
    //             return "YES";
    //         }
    //         if (mp.find(res[i]) != mp.end()) {
    //             mp[res[i]]++;
    //             if (mp[res[i]] == 1) {
    //                 mp.erase(res[i]);
    //             }
    //         }
    //         i++;
    //     }
    // }
    if (res.find(s) != string::npos)
        return "YES";
    return "NO";
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
        string s;
        for (int i = 0; i < n; i++)
        {
            char a;
            cin >> a;
            s.push_back(a);
        }
        string ans = find(s, n);
        cout << ans << " " << endl;
    }
    return 0;
}