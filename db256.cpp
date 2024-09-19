#include <iostream>
#include <bits/stdc++.h>
using namespace std;
typedef long long int lli;
string find(string& s)
{
    map<char,int>mp;
    int i=0,j=s.size()-1;
    while(i<=j)
    {
        if(s[i]==s[j])
        {
            if(i==j)
            {
                mp[s[i]]++;
            }
            else
            {
                mp[s[i]]++;
                mp[s[j]]++;
            }
            i++;
            j--;
        }
        else
        {
            return s;
        }
    }
    if(mp.size()==1) return "NO";
    string ans;
    for(auto it:mp)
    {
        while(it.second>0)
        {
            ans+=it.first;
            it.second--;
        }
    }
    return ans;
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
        string ans=find(s);
        if(ans=="NO")
        {
            cout<<-1<<endl;
        }
        else
        {
            cout<<ans<<endl;
        }
    }
    return 0;
}