#include <iostream>
#include <bits/stdc++.h>
using namespace std;
typedef long long int lli;
string find(vector<char>& v)
{
    string s;
    s+=v[0];
    map<string,int>mp;
    for(int i=1;i<v.size();i++)
    {
        s+=v[i];
        mp[s]++;
        s.pop_back();
        s.pop_back();
        s+=v[i];
    }
    int ans=0;
    string s1;
    for(auto it:mp)
    {
        if(it.second>ans)
        {
            ans=it.second;
            s1=it.first;
        }
    }
    return s1;
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
        cout<<ans<<endl;
    // }
    return 0;
}