#include <iostream>
#include <bits/stdc++.h>
using namespace std;
typedef long long int lli;
string find(int n,int k)
{
    if(n>2 && (n-2)%k==0)
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
        int n,k;
        cin>>n>>k;
        string ans=find(n,k);
        cout << ans << " " << endl;
    }
    return 0;
}