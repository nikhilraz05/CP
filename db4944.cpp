#include <iostream>
#include <bits/stdc++.h>
using namespace std;
typedef long long int lli;
pair<int,string> find(string &s)
{
    map<int,char>mp;
    for(int i=0;i<s.size();i++)
    {
         mp[i]=s[i];
    }
    string s1;
    for(auto it=mp.rbegin();it!=mp.rend();it++)
    {
        s1+=it->second;
    }
    if(s1==s)
    {
        return {0,"No"};
    }
    return {1,s1};
}
int main()
{
    int t;
    // cout<<"Enter testcases"<<" "<<endl;
    cin >> t;
    while (t--)
    {
        string s;
        // cout<<"enter s"<<" "<<endl;
        cin>>s;
        pair<int,string> ans=find(s);
        if(ans.first==0)
        {
            cout<<"No"<<" "<<endl;
        }
        else
        {
            cout<<"Yes"<<" "<<endl;
            cout<<ans.second<<" "<<endl;
        }
    }
    return 0;
}