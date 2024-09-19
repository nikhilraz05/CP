#include <iostream>
#include <bits/stdc++.h>
using namespace std;
typedef long long int lli;
int find(int x,int y,int n)
{
    int a=y;
    while(a!=0)
    {
        int rem=a%10;
        if(rem==7) return 0;
        else
        {
            break;
        }
    }
    a=a-10;
    if(a<0 && y<7)
    {
        a=50;
    }
    if(a<0 && y>7)
    {
        a=1;
    }
    if(y<7)
    {
        y=60+y;
    }
    while(a>=0)
    {
        int rem=a%10;
        if(rem==7)
        {
            break;
        }
        a=a+1;
    }
    // cout<<a<<endl;
    int cnt=0;
    while(a<y)
    {
        a=a+n;
        cnt++;
    }
    return cnt;
}
int main()
{
    // int t;
    // // cout << "Enter testcases" << " " << endl;
    // cin >> t;
    // while (t--)
    // {
        int n;
        cin>>n;
        int x,y;
        cin>>x>>y;
        int ans=find(x,y,n);
        cout<<ans<<endl;
    // }
    return 0;
}