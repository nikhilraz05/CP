#include <iostream>
#include <bits/stdc++.h>
using namespace std;
typedef long long int lli;
pair<lli,lli>find(string& s)
{
    string res;
    int i=0;
    res+=s[i];
    i++;
    while(i<s.size() && s[i]-'0'==0)
    {
        res+=s[i];
        i++;
    }
    string ans;
    while(i<s.size())
    {
        ans+=s[i];
        i++;
    }
    lli a=(res.size()>0 ? stoi(res):0);
    lli b=(ans.size()>0 ? stoi(ans):0);
    if(a>=b)
    {
        return {-1,-1};
    }
    return {a,b};
}
int main()
{
    int t;
    // cout << "Enter testcases" << " " << endl;
    cin >> t;
    while (t--)
    {
        string s;
        cin>>s;
        pair<lli,lli>ans=find(s);
        if(ans.first==-1)
        {
            cout<<-1<<" "<<endl;
        }
        else
        {
            cout<<ans.first<<" "<<ans.second<<" "<<endl;
        }
    }
    return 0;
}