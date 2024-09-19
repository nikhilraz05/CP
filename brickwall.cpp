#include <iostream>
#include <bits/stdc++.h>
using namespace std;
typedef long long int lli;
lli find(lli a,lli b)
{
    lli x=a/1;
    lli y=b/2;
    return (x*y);
}
int main()
{
    int t;
    // cout<<"Enter testcases";
    cin >> t;
    while (t--)
    {
        lli a,b;
        // cout<<"enter a,b"<<" "<<endl;
        cin>>a>>b;
        lli ans = find(a,b);
        cout<<ans<<" "<<endl;
    }
    return 0;
}