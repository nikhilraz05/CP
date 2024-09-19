#include <iostream>
#include <bits/stdc++.h>
using namespace std;
typedef long long int lli;
string find(int a, int b, int c,int d)
{
    int cnt=0;
    int mx=max(c,d);
    int mn=min(c,d);
    for(int i=mn+1;i<=mx;i++)
    {
        if(i==a)
        {
            cnt++;
        }
        if(i==b)
        {
            cnt++;
        }
    }
    if(cnt==1)
    {
        return "YES";
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
        int a, b, c,d;
        cin >> a >> b >> c>>d;
        string ans= find(a,b,c,d);
        cout<<ans<<" "<<endl;
    }
    return 0;
}