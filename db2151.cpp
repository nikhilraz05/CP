#include <iostream>
#include <bits/stdc++.h>
using namespace std;
typedef long long int lli;
int find(int a1,int a2,int b1,int b2,int c1,int c2)
{
    int hab=b2-a2;
    int xab=b1-a1;
    int hac=c2-a2;
    int xac=c1-a1;
    if(hab<=0 && hac<=0)
    {
        if(xab>=0 && xac>=0)
        {
            return min(xab,xac)+min(hab,hac);
        }
        if(xab<=0 && xac<=0)
        {
            return min(xab,xac)+min(hab,hac);
        }
        if(xab=0 && xac<=0)
        {
            return min(xab,xac)+min(hab,hac);
        }
        if(xab>=0 && xac<=0)
        {
            return min(xab,xac)+min(hab,hac);
        }
    }
    if(hab>=0 && hac>=0)
    {
        if(xab>=0 && xac>=0)
        {
            return min(xab,xac)+min(hab,hac);
        }
        if(xab<=0 && xac<=0)
        {
            return min(xab,xac)+min(hab,hac);
        }
        if(xab<=0 && xac>=0)
        {
            return min(hab,hac);
        }
        if(xab<=0 && xac>=0)
        {
            return min(hab,hac);
        }
    }
    if(hab>=0 && hac<=0)
    {
        if(xab>=0 && xac>=0)
        {
            return min(xab,xac);
        }
        if(xab<=0 && xac<=0)
        {
            return min(xab,xac);
        }
        if(xab<=0 && xac>=0)
        {
            return 0;
        }
        if(xab>=0 && xac<=0)
        {
            return 0;
        }
    }
    if(hab<=0 && hac>=0)
    {
        if(xab>=0 && xac>=0)
        {
            return min(xab,xac);
        }
        if(xab<=0 && xac<=0)
        {
            return min(xab,xac);
        }
        if(xab<=0 && xac>=0)
        {
            return 0;
        }
        if(xab>=0 && xac<=0)
        {
            return 0;
        }
    }
    return 0;
}
int main()
{
    int t;
    // cout << "Enter testcases" << " " << endl;
    cin >> t;
    while (t--)
    {
        int a1,a2;
        int b1,b2;
        int c1,c2;
        cin>>a1>>a2;
        cin>>b1>>b2;
        cin>>c1>>c2;
        int ans=find(a1,a2,b1,b2,c1,c2);
        ans=abs(ans)+1;
        cout<<ans<<endl;
    }
    return 0;
}