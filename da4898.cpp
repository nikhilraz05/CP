#include <iostream>
#include <bits/stdc++.h>
using namespace std;
typedef long long int lli;
string find(string& s)
{
   string v="abc";
   int cnt=0;
   for(int i=0;i<s.size();i++)
   {
      if(s[i]!=v[i])
      {
        cnt++;
      }
   }
   if(cnt<=2)
   {
    return "Yes";
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
        string s;
        cin>>s;
        string  ans = find(s);
        cout << ans << " " << endl;
    }
    return 0;
}