#include <iostream>
#include <bits/stdc++.h>
using namespace std;
typedef long long int lli;
int find2(int n,int m,int a,int b,int c,int d)
{
    if(c>=2 && c<=n-1)
    {
        if(d>=2 && d<=m-1)
        {
            return 4;
        }
        else
        {
            return 3;
        }
    }
    if((c==1 && d==m) || (c==1 && d==1) ||(c==n && d==1) ||(c==n && d==m)) return 2;
    return 3;
}
int find1(int n,int m,int a,int b,int c,int d)
{
    if(a>=2 && a<=n-1)
    {
        if(b>=2 && b<=m-1)
        {
            return 4;
        }
        else
        {
            return 3;
        }
    }
    if((a==1 && b==m) || (a==1 && b==1) ||(a==n && b==1) ||(a==n && b==m)) return 2;
    return 3;
}
int main()
{
    int t;
    // cout << "Enter testcases" << " " << endl;
    cin >> t;
    while (t--)
    {
        int n,m;
        // cout<<"enter n,m"<<" "<<endl;
        cin>>n>>m;
        int a,b,c,d;
        // cout<<"enter a,b,c,d"<<" "<<endl;
        cin>>a>>b>>c>>d;
        int ans1 = find1(n,m,a,b,c,d);
        int ans2=find2(n,m,a,b,c,d);
        int ans=min(ans1,ans2);
        cout << ans << " " << endl;
    }
    return 0;
}