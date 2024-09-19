#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{
    // cout<<"enter testcases";
    int t;
    cin>>t;
    while(t--)
    {
       int x,y;
    //    cout<<"enter numbers";
       cin>>x>>y;
       int a=min(x,y);
       int b=max(x,y);
       cout<<a<<" "<<b<<" "<<endl;
    }
    return 0;
}