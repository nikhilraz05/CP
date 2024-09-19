#include <iostream>
#include <bits/stdc++.h>
using namespace std;
typedef long long int lli;
int find(int n,int v)
{
    if(n<=v)
    {
        return n;
    }
    int cost=0;
    int prev=1;
    int curr=1;
    int f=v;
    cost+=f;
    if(curr+f==n)
    {
        return cost;
    }
    while(curr<n)
    {
        if(curr+f<n)
        {
            prev=prev+1;
            curr=prev;
            f=f-1;
            cost+=(v-f)*prev;
            f=v;
        }
        if(curr+f==n)
        {
            break;
        }
    }
    return cost;
}
int main()
{
    // int t;
    // // cout << "Enter testcases" << " " << endl;
    // cin >> t;
    // while (t--)
    // {
        int n,v;
        cin>>n>>v;
        int ans=find(n,v);
        cout<<ans<<endl;
    // }
    return 0;
}