#include <iostream>
#include <bits/stdc++.h>
using namespace std;
typedef long long int lli;
int find(int n)
{
    if(n%7==0)
    {
        return 1;
    }
    if(n%3==0)
    {
        return 1;
    }
    int i=7,j=3;
    for(;i<=n;i+=7)
    {
        if((n-i)%3==0)
        {
            return 1;
        }
    }
    return 0;
}
int main()
{
    int t;
    // cout << "Enter testcases" << " " << endl;
    cin >> t;
    while (t--)
    {
        int n;
        cin>>n;
        int ans=find(n);
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