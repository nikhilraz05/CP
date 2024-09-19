#include <iostream>
#include <bits/stdc++.h>
using namespace std;
typedef long long int lli;
string find(int n,int a,vector<char>& v)
{
    if(n<=a) return "YES";
    int sum1=0,sum2=0;
    int sum=0;
    for(auto it:v)
    {
        if(it=='+')
        {
            sum1++;
        }
        else
        {
            sum2++;
        }
    }
    if(sum1==sum2)
    {
        if(a+sum1>=n)
        {
            return "YES";
        }
        else
        {
            return "MAYBE";
        }
    }
    if(sum1+sum2+a>=n)
    {
        return "Yes";
    }
    if(sum1+a>=n)
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
        int n, a, q;
        // cout << "ente n,a,q" << endl;
        cin >> n >> a >> q;
        // cout<<"enter values"<<endl;
        vector<char>v;
        for(int i=0;i<q;i++)
        {
            char b;
            cin>>b;
            v.push_back(b);
        }
        string ans = find(n, a, v);
        cout << ans << " " << endl;
    }
    return 0;
}