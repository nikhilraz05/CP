#include <iostream>
#include <bits/stdc++.h>
using namespace std;
typedef long long int lli;
int find(int x,int y,int k)
{
    int time=0,dist=0;
    if(x>=y)
    {
        return x;
    }
    dist+=x;
    time+=x;
    while(k>0)
    {
        if(dist==y)
        {
            return time;
        }
        dist+=1;
        time+=1;
        k--;
    }
    time+=2*(y-dist);
    return time;
}
int main()
{
    int t;
    // cout<<"Enter testcases";
    cin >> t;
    while (t--)
    {
        int x,y,k;
        // cout<<"enter x,y,k"<<" "<<endl;
        cin>>x>>y>>k;
        // cout<<"enter value"<<" "<<endl;
        int ans=find(x,y,k);
        cout<<ans<<" "<<endl;
    }
    return 0;
}