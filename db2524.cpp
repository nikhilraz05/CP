#include <iostream>
#include <bits/stdc++.h>
using namespace std;
typedef long long int lli;
lli find(lli l,lli r)
{
    if(l==r)
    {
        if(l%2==0) return l;
        return -l;
    }
    lli sum=0;
    lli a=(r-l)+1;
    lli k=a/2;
    if(l%2==1)
    {
        sum+=(k*1);
    }
    else
    {
        sum+=(k*(-1));
    }
    if(a%2==1)
    {
        if(r%2==0)
        {
            sum+=r;
        }
        else
        {
            sum-=r;
        }
    }
    return sum;
}
int main()
{
    int t;
    // cout << "Enter testcases" << " " << endl;
    cin >> t;
    while (t--)
    {
        lli l,r;
        cin>>l>>r;
        lli ans=find(l,r);
        cout<<ans<<endl;
    }
    return 0;
}