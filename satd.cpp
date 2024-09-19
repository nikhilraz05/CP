#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int find(int n,int k)
{
    if(n==2)
    {
        if(k==4*n-2)
        {
            return 4;
        }
        if(k%2==0) return k/2;
        if(k%2!=0)
        {
            return (k+1)/2;
        }
    }
    int x=n-2;
    int cell=n+x;
    int house=2*cell;
    if(k>house)
    {
        cell+=(k-house);
    }
    else
    {
        if(k%2==0)
        {
            return k/2;
        }
        else
        {
            return (k+1)/2;
        }
    }
    return cell;
}
int main()
{
    // cout<<"enter testcases"<<" "<<endl;
    int t;
    cin>>t;
    while(t--)
    {
       int n,k;
    //    cout<<"enter values"<<" "<<endl;
       cin>>n>>k;
       int ans=find(n,k);
       cout<<ans<<" "<<endl;
    }
    return 0;
}