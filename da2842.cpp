#include <iostream>
#include <bits/stdc++.h>
using namespace std;
typedef long long int lli;
lli find(int n)
{
    return n-1;
}
int main()
{
    int t;
    // cout << "Enter testcases" << " " << endl;
    cin >> t;
    while (t--)
    {
        int n;
        // cout<<"enter n"<<" "<<endl;
        cin>>n;
        lli ans=find(n);
        cout<<ans<<" "<<endl;
    }
    return 0;
}