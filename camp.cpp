#include<iostream>
#include<bits/stdc++.h>
using namespace std;
typedef long long int lli;
int find(lli a,lli b,lli c)
{
    lli ans=0;
    ans+=a;
    lli cnt=b+c;
    lli y=0,x=0;
    if(b!=0 && b%3!=0 && (b%3)+c<3) return -1;
    while(cnt>0)
    {
        if(cnt%3==0)
        {
            x+=(cnt/3);
            cnt=0;
        }
        else
        {
            cnt-=1;
            y=1;
        }
    }
    ans+=x;
    ans+=y;
    return ans;
}
int main()
{
    int t;
    // cout<<"Enter testcases";
    cin>>t;
    while(t--)
    {
    //    int n;
    //    cout<<"Enter size";
    //    cin>>n;
       lli a,b,c;
    //    cout<<"enter numbers";
       cin>>a>>b>>c;
       int ans=find(a,b,c);
       cout<<ans<<" "<<endl;
    }
    return 0;
}