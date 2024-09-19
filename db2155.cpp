#include <iostream>
#include <bits/stdc++.h>
using namespace std;
typedef long long int lli;
lli find(vector<lli>& v1,vector<lli>& v2,int n)
{
    lli mn1=INT_MAX;
    lli mn2=INT_MAX;
    for(auto it:v1)
    {
        mn1=min(mn1,it);
    }
    for(auto it:v2)
    {
        mn2=min(mn2,it);
    }
    lli sum1=0;
    for(auto it:v2)
    {
        lli a=mn1+it;
        sum1+=a;
    }
    lli sum2=0;
    for(auto it:v1)
    {
        lli a=mn2+it;
        sum2+=a;
    }
    return min(sum1,sum2);
}
int main()
{
    int t;
    // cout << "Enter testcases" << " " << endl;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        vector<lli> v1;
        for (int i = 0; i < n; i++)
        {
            lli a;
            cin >> a;
            v1.push_back(a);
        }
        vector<lli> v2;
        for (int i = 0; i < n; i++)
        {
            lli a;
            cin >> a;
            v2.push_back(a);
        }
        
        lli ans = find(v1,v2, n);
        cout << ans << endl;
    }
    return 0;
}