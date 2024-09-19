#include <iostream>
#include <bits/stdc++.h>
using namespace std;
typedef long long int lli;

lli find(lli a,lli b,lli n,lli m)
{
    lli div=n/(m+1);
    lli first=a*div*m;
    lli last=(n-(m+1)*div)*min(a,b);
    if(n%(m+1)==0)
    {
        last=0;
    }
    return min({first+last,lli(a*n),lli(b*n)});
}
int main()
{
    int t;
    // cout << "Enter testcases" << " " << endl;
    cin >> t;
    while (t--)
    {
        lli a,b;
        // cout<<"enter a,b"<<" "<<endl;
        cin>>a>>b;
        lli n,m;
        // cout<<"enter n,m"<<" "<<endl;
        cin>>n>>m;
        lli ans=find(a,b,n,m);
        cout<<ans<<" "<<endl;
    }
    return 0;
}