#include <iostream>
#include <bits/stdc++.h>
using namespace std;
typedef long long int lli;
string find(lli a,lli b)
{
    if(a==1 && b==1)
    {
        return "NO";
    }
    if(a%2!=0 && b%2!=0)
    {
        return "NO";
    }
    lli mn=min(a,b);
    lli mx=max(a,b);
    if(mn%2==1 && mx==mn*2)
    {
        return "NO";
    }
    return "YES";
}
int main()
{
    int t;
    // cout << "Enter testcases" << " " << endl;
    cin >> t;
    while (t--)
    {
        lli a,b;
        cin>>a>>b;
        string ans=find(a,b);
        cout << ans << " " << endl;
    }
    return 0;
}