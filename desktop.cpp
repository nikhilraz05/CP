#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int find(int x,int y)
{
    int cnt1=0,s=0;
    int a=y/2;
    s+=a;
    cnt1+=(a*7);
    int b=y%2;
    s+=b;
    cnt1+=(b*11);
    if(cnt1>=x) return s;
    x=x-cnt1;
    while(x>0)
    {
        x=x-15;
        s++;
    }
    return s;
}
int main()
{
    //  cout<<"enter testcases";
    int t;
    cin>>t;
    while(t--)
    {
       int x,y;
    //    cout<<"enter numbers";
       cin>>x>>y;
       int a=find(x,y);
       cout<<a<<" "<<endl;
    }
    return 0;
}