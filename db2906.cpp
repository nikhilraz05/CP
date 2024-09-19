#include <iostream>
#include <bits/stdc++.h>
using namespace std;
typedef long long int lli;
int find(string& s,string& t,int n,int m)
{
    if(n==1)
    {
        return 1;
    }
    bool tstate=1;
    for(int i=1;i<m;i++)
    {
        if(t[i]==t[i-1])
        {
            tstate=0;
        }
    }
    bool sstate=0;
    for(int i=1;i<n;i++)
    {
        if(s[i]==s[i-1])
        {
            if(tstate==1)
            {
                if(s[i-1]!=t[0] && s[i]!=t[m-1])
                {
                    sstate=1;
                }
                if(s[i-1]==t[0])
                {
                    return 0;
                }
                if(s[i]==t[m-1])
                {
                    return 0;
                }
            }
            else
            {
                return 0;
            }
        }
    }
    return sstate;
}
int main()
{
    int t;
    // cout<<"Enter testcases"<<" "<<endl;
    cin >> t;
    while (t--)
    {
        int n,m;
        string s,t;
        // cout<<"enter n,m"<<" "<<endl;
        cin>>n>>m;
        // cout<<"enter s"<<" "<<endl;
        cin>>s;
        // cout<<"enter t"<<" "<<endl;
        cin>>t;
        int ans=find(s,t,n,m);
        if(ans==0)
        {
            cout<<"No"<<" "<<endl;
        }
        else
        {
            cout<<"Yes"<<" "<<endl;
        }
    }
    return 0;
}