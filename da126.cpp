#include <iostream>
#include <bits/stdc++.h>
using namespace std;
typedef long long int lli;
int find(int n, int k, int x)
{
    if(n==1 && k==1)
    {
        return 0;
    }
    if(n==1 && k>1)
    {
        return -1;
    }
    if(n>1 && k>n)
    {
        return -1;
    }
    if(n>1 && k>x+1)
    {
        return -1;
    }
    int sum=0;
    int m=k-1;
    int a=(m*(m+1))/2;
    sum+=a;
    if(k==x)
    {
        x=x-1;
        if(x<0)
        {
            x=0;
        }
    }
    int b=(n-k)*x;
    sum+=b;
    return sum;
}
int main()
{
    int t;
    // cout << "Enter testcases" << " " << endl;
    cin >> t;
    while (t--)
    {
        int n, k, x;
        // cout << "ente n,k,x" << endl;
        cin >> n >> k >> x;
        int ans = find(n, k, x);
        cout << ans << " " << endl;
    }
    return 0;
}