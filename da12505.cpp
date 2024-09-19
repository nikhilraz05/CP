#include <iostream>
#include <bits/stdc++.h>
using namespace std;
typedef long long int lli;
string find(vector<char>& v)
{
    if(v.size()==1) return "Yes";
    map<char,int>mp;
    for(auto it:v)
    {
        if(mp.find(it)!=mp.end())
        {
            return "Yes";
        }
        else
        {
            mp[it]++;
        }
    }
    return "No";
}
int main()
{
    // int t;
    // // cout << "Enter testcases" << " " << endl;
    // cin >> t;
    // while (t--)
    // {
        int n;
        cin>>n;
        vector<char>v;
        for(int i=0;i<n;i++)
        {
            char a;
            cin>>a;
            v.push_back(a);
        }
        string ans=find(v);
        cout<<ans<<" ";
        cout<<endl;
    // }
    return 0;
}