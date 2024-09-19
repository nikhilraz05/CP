#include<iostream>
#include<bits/stdc++.h>
using namespace std;
string find(string& s,int n)
{
    set<char>s1;
    for(auto it:s)
    {
        s1.insert(it);
    }
    vector<char>v;
    for(auto it:s1)
    {
        v.push_back(it);
    }
    map<char,char>mp;
    int i=0,j=v.size()-1;
    while(i<=j)
    {
        mp[v[i]]=v[j];
        mp[v[j]]=v[i];
        i++;
        j--;
    }
    string s2;
    for(auto it:s)
    {
        s2+=mp[it];
    }
    return s2;
}
int main()
{
    // cout<<"enter testcase";
    int t;
    cin>>t;
    while(t--)
    {
       string s;
       int n;
    //    cout<<"enter string";
       cin>>n>>s;
       string a=find(s,n);
       cout<<a<<endl;
    }
    return 0;
}