#include<iostream>
#include<bits/stdc++.h>
using namespace std;
typedef long long int lli;
int find(int n,int k)
{
    if(n-k<=1 || k==(n*(n-1)/2))
    {
        return 1;
    }
    return n;
}
int main()
{
    int t;
    // cout<<"Enter testcases";
    cin>>t;
    while(t--)
    {
       int n,k;
    //    cout<<"enter number"<<" "<<endl;
       cin>>n>>k;
       int ans=find(n,k);
       cout<<ans<<" "<<endl;
    }
    return 0;
}