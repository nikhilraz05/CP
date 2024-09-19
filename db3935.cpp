#include <iostream>
#include <bits/stdc++.h>
using namespace std;
typedef long long int lli;
lli find(lli a, lli b, lli m)
{
    m=m+1;
    lli ans=0;
    ans+=(m/a);
    if(m%a!=0)
    {
        ans+=1;
    }
    ans+=(m/b);
    if(m%b!=0)
    {
        ans+=1;
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
        lli a, b, m;
        cin >> a >> b >> m;
        lli ans=find(a,b,m);
        cout<<ans<<" "<<endl;
    }
    return 0;
}