#include <iostream>
#include <bits/stdc++.h>
using namespace std;
typedef long long int lli;
lli find(lli n)
{
    lli sum=0;
    while(n>0)
    {
        sum+=n;
        n=n/2;
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
        lli n;
        // cout<<"enter n"<<" "<<endl;
        cin>>n;
        lli ans=find(n);
        cout<<ans<<" "<<endl;
    }
    return 0;
}