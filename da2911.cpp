#include <iostream>
#include <bits/stdc++.h>
using namespace std;
typedef long long int lli;
int find(string &s,int n)
{
    int cnt=0,ans=0;
    for(int i=0;i<n;)
    {
        if(s[i]=='.')
        {
            int cnt1=0;
            while(i<n && s[i]=='.')
            {
                cnt1++;
                if(cnt1>2)
                {
                    return 2;
                }
                i++;
            }
            cnt+=cnt1;
        }
        i++;
    }
    ans=max(ans,cnt);
    return ans;
}
int main()
{
    int t;
    // cout<<"Enter testcases"<<" "<<endl;
    cin >> t;
    while (t--)
    {
        int n;
        // cout<<"enter n"<<" "<<endl;
        cin>>n;
        string s;
        // cout<<"enter s"<<" "<<endl;
        cin>>s;
        int ans=find(s,n);
        cout<<ans<<" "<<endl;
    }
    return 0;
}