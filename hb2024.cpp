#include <iostream>
#include <bits/stdc++.h>
using namespace std;
typedef long long int lli;
int find(string& s,int n)
{
    int cntve=0,cntnve=0;
    for(int i=0;i<n;i++)
    {
        if(s[i]=='+')
        {
            cntve++;
        }
        else
        {
            cntnve++;
        }
    }
    return abs(cntve-cntnve);
}
int main()
{
    int t;
    // cout << "Enter testcases" << " " << endl;
    cin >> t;
    while (t--)
    {
        int n;
        cin>>n;
        string s;
        cin>>s;
        int ans=find(s,n);
        cout << ans << " " << endl;
    }
    return 0;
}