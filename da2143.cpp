#include <iostream>
#include <bits/stdc++.h>
using namespace std;
typedef long long int lli;
string find(string& a,string& b,int n,int m)
{
    int cnt=0;
    reverse(b.begin(),b.end());
    string res=a+b;
    char prev=res[0];
    cnt=1;
    int cntg=0;
    for(int i=1;i<res.size();i++)
    {
        bool valid=0;
        if(res[i]=='R')
        {
            if(prev==res[i])
            {
                cnt++;
                valid=1;
            }
            else
            {
                cnt=0;
            }
            if(cnt==2)
            {
                cntg++;
            }
            // cout<<cnt<<endl;
            if(cnt>=3)
            {
                return "NO";
            }
        }
        else
        {
            if(prev==res[i])
            {
                cnt++;
                valid=1;
            }
            else
            {
                cnt=0;
            }
            if(cnt==2)
            {
                cntg++;
            }
            if(cnt>=3)
            {
                return "NO";
            }
        }
        if(valid==1)
        {
            cnt=cnt;
        }
        else
        {
            cnt++;
        }
        if(cntg>=2)
        {
            return "NO";
        }
        prev=res[i];
    }
    return "YES";
}
int main()
{
    int t;
    // cout << "Enter testcases" << " " << endl;
    cin >> t;
    while (t--)
    {
        int n,m;
        cin>>n>>m;
        string a,b;
        cin>>a>>b;
        string ans=find(a,b,n,m);
        cout << ans << " " << endl;
    }
    return 0;
}