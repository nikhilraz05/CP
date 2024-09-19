#include <iostream>
#include <bits/stdc++.h>
using namespace std;
typedef long long int lli;
int find(string& s,int n,int k)
{
    int i=0,j=0;
    int ans=0;
    for(;j<n;)
    {
        if(s[j]=='B')
        {
           ans++;
           i=j;
           j=i+k-1;
           i=j;
        }
        j++;
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
        int n,k;
        // cout<<"enter n,k"<<" "<<endl;
        cin>>n>>k;
        string s;
        // cout<<"enter values"<<" "<<endl;
        cin>>s;
        int  ans = find(s,n,k);
        cout << ans << " " << endl;
    }
    return 0;
}