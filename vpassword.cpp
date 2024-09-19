#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int find(string& s,int n)
{
    // map<char,int>mp;
    // int x=97;
    // for(char ch='a';ch<='z';ch++)
    // {
    //     mp[ch]=x;
    //     x++;
    // }
    for(int i=1;i<n;i++)
    {
        int a=s[i-1]-0;
        int b=s[i]-0;
        if(a>b) return 0;
    }
    return 1;
}
int main()
{
    // cout<<"enter testcases"<<" "<<endl;
    int t;
    cin>>t;
    while(t--)
    {
       int n;
    //    cout<<"enter values"<<" "<<endl;
       string s;
       cin>>n>>s;
       int ans=find(s,n);
       string res;
       if(ans==0)
       {
         res="NO"; 
       }
       else
       {
         res="YES";
       }
       cout<<res<<" "<<endl;
    }
    return 0;
}