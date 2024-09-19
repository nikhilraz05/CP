#include <iostream>
#include <bits/stdc++.h>
using namespace std;
typedef long long int lli;
string find(vector<int>& v,int n)
{
    for(int i=0;i<n;i++)
    {
        if(v[i]<=n && v[i]<=i+1) return "YES";
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
        int n;
        // cout<<"enter n"<<" "<<endl;
        cin>>n;
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