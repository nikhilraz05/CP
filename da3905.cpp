#include <iostream>
#include <bits/stdc++.h>
using namespace std;
typedef long long int lli;
int find(string &s)
{
    int prev=1;
    int ans=0;
    for(int i=0;i<s.size();i++)
    {
        int a=((s[i]=='0')?10:s[i]-'0');
        ans+=abs(a-prev);
        ans+=1;
        // cout<<a<<" "<<prev<<" "<<ans<<endl;
        prev=a;
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