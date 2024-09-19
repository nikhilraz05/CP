#include <iostream>
#include <bits/stdc++.h>
using namespace std;
typedef long long int lli;
string find(vector<int>& v,int n)
{
    int sum0=0,sum1=0;
    for(auto it:v)
    {
        if(it%2==0)
        {
            sum0+=it;
        }
        else
        {
            sum1+=it;
        }
    }
    if(sum0>sum1) return "YES";
    return "NO";
}
int main()
{
    int t;
    // cout << "Enter testcases" << " " << endl;
    cin >> t;
    while (t--)
    {
        int n;
        // cout << "ente n" << endl;
        cin >> n;
        vector<int>v;
        // cout<<"enter v"<<" "<<endl;
        for(int i=0;i<n;i++)
        {
            int a;
            cin>>a;
            v.push_back(a);
        }
        string ans = find(v,n);
        cout << ans << " " << endl;
    }
    return 0;
}