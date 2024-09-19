#include <iostream>
#include <bits/stdc++.h>
using namespace std;
typedef long long int lli;
string find(vector<int>& v,int n)
{
    map<int,int>mp;
    for(auto it:v)
    {
        mp[it]++;
    }
    int cnt=0;
    for(auto it:mp)
    {
        cnt=max(cnt,it.second);
    }
    if(n%2==0)
    {
        if(n/2<cnt) return "NO";
    }
    n=n/2;
    n=n+1;
    if(n<=cnt) return "NO";
    return "YES";
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
        vector<int>v;
        for(int i=0;i<n;i++)
        {
            int a;
            cin>>a;
            v.push_back(a);
        }
        string ans=find(v,n);
        cout<<ans<<endl;
    }
    return 0;
}