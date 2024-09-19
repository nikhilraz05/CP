#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int gcd(int x,int i)
{
    while(i>0)
    {
        int r=x%i;
        x=i;
        i=r;
    }
    return x;
}
int find(int x)
{
    int ans=0;
    for(int i=1;i<x;i++)
    {
        int k=gcd(x,i)+i;
       if(k<x) ans=max(ans,k);
    }
    return ans;
}
int main()
{
    cout<<"enter testcases";
    int t;
    cin>>t;
    while(t--)
    {
       int x;
       cout<<"enter numbers";
       cin>>x;
       int a=find(x);
       cout<<a<<" "<<endl;
    }
    return 0;
}