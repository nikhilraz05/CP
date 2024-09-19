#include <iostream>
#include <bits/stdc++.h>
using namespace std;
typedef long long int lli;
string find(string& s,int k)
{
    map<char,int>mp;
    for(int i=0;i<s.size();i++)
    {
        mp[s[i]]++;
    }
    int cnt=0;
    for(auto it:mp)
    {
        if(k==0)
        {
            break;
        }
        if(it.second%2==1 && it.second>0)
        {
            it.second--;
            mp[it.first]=it.second;
            k--;
        }
    }
    for(auto it:mp)
    {
        // cout<<it.first<<" "<<it.second<<endl;
        if(it.second>0 && it.second%2==1)
        {
            cnt++;
        }
    }
    if(cnt>1) return "NO";
    return "YES";
}
int main()
{
    int t;
    // cout << "Enter testcases" << " " << endl;
    cin >> t;
    while (t--)
    {
        int n,k;
        cin>>n>>k;
        string s;
        for(int i=0;i<n;i++)
        {
            char a;
            cin>>a;
            s.push_back(a);
        }
        string ans=find(s,k);
        cout<<ans<<endl;
    }
    return 0;
}