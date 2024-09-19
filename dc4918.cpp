#include <iostream>
#include <bits/stdc++.h>
using namespace std;
typedef long long int lli;
int find(vector<lli>& v,int n)
{
    lli sum=0;
    for(auto it:v)
    {
        sum+=it;
    }
    double a=sqrt(sum);
    string s=to_string(a);
    // cout<<s<<"hiii"<<endl;
    for(int i=s.size()-1;i>=0;i--)
    {
        if(s[i]=='.')
        {
            break;
        }
        if(s[i]-'0'>0)
        {
           return 0;
        }
    }
    return 1;
}
int main()
{
    int t;
    // cout<<"Enter testcases";
    cin >> t;
    while (t--)
    {
        int n;
        // cout<<"enter n"<<" "<<endl;
        cin>>n;
        vector<lli>v;
        // cout<<"enter value"<<" "<<endl;
        for(int i=0;i<n;i++)
        {
            int a;
            cin>>a;
            v.push_back(a);
        }
        int ans=find(v,n);
        if(ans==0)
        {
            cout<<"No"<<endl;
        }
        else
        {
            cout<<"Yes"<<endl;
        }
    }
    return 0;
}