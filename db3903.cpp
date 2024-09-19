#include <iostream>
#include <bits/stdc++.h>
using namespace std;
typedef long long int lli;
int find(int a,int b,int c)
{
    int mx=max({a,b,c});
    int mn=min({a,b,c});
    int a1=a/mn;
    int cnt=0;
    cnt+=(a1-1);
    if(a%mn!=0)
    {
        if(cnt>3)
        {
            return 0;
        }
        mn=a%mn;
        cnt=max(cnt,find(mn,b,c));
    }
    int b1=b/mn;
    cnt+=(b1-1);
    if(b%mn!=0)
    {
        if(cnt>3)
        {
            return 0;
        }
        mn=b%mn;
        cnt=max(cnt,find(a,mn,c));
    }
    int c1=c/mn;
    if(c%mn!=0)
    {
        if(cnt>3)
        {
            return 0;
        }
        mn=c%mn;
        cnt=max(cnt,find(a,b,mn));
    }
    cnt+=(c1-1);
    if(cnt>3) return 0;
    return 1;
}
int main()
{
    int t;
    // cout << "Enter testcases" << " " << endl;
    cin >> t;
    while (t--)
    {
        int a,b,c;
        cin>>a>>b>>c;
        int ans = find(a,b,c);
        if(ans==0)
        {
            cout<<"NO"<<endl;
        }
        else
        {
            cout<<"YES"<<endl;
        }
    }
    return 0;
}