#include <iostream>
#include <bits/stdc++.h>
using namespace std;
typedef long long int lli;
vector<bool>prime;
lli find(lli n)
{
    if(n<=3) return 1;
    n=n/2;
    
}
int main()
{
    int t;
    // cout << "Enter testcases" << " " << endl;
    cin >> t;
    while (t--)
    {
        lli n;
        cin>>n;
        lli ans=find(n);
        cout<<ans<<endl;
    }
    return 0;
}