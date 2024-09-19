#include <iostream>
#include <bits/stdc++.h>
using namespace std;
typedef long long int lli;
lli find(lli n,lli k,lli x)
{
    lli a=k*(k+1);
    a=a/2;
    if(x<a)
    {
        return 0;
    }
    lli b=n*(n+1);
    b=b/2;
    if(x>b)
    {
        return 0;
    }
    lli c=n-k;
    c=c*(c+1);
    c=c/2;
    lli ans=b-c;
    if(ans<x)
    {
        return 0;
    }
    return 1;
}
int main()
{
    int t;
    // cout << "Enter testcases" << " " << endl;
    cin >> t;
    while (t--)
    {
        lli n,k,x;
        cin>>n>>k>>x;
        lli ans=find(n,k,x);
        if(ans==0)
        {
            cout<<"NO"<<endl;
        }
        else
        {
            cout<<"YES"<<endl;
        }
    }
    return 0;
}