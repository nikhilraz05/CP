#include <iostream>
#include <bits/stdc++.h>
using namespace std;
typedef long long int lli;
pair<int,pair<int,char>>find(string& s,int n,int k)
{
    int cnt=0;
    int prev=-1;
    for(int i=0;i<n;i++)
    {
        if(s[i]=='B')
        {
            cnt++;
            prev=i;
        }
    }
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
        pair<int,pair<int,char>>ans=find(s,n,k);
        if(ans.first==0)
        {
            cout<<0<<" "<<endl;
        }
        else
        {
            cout<<ans.first<<" "<<endl;
            cout<<ans.second.first<<" "<<ans.second.second<<" "<<endl;
        }
    }
    return 0;
}