#include <iostream>
#include <bits/stdc++.h>
using namespace std;
typedef long long int lli;
int find(string& s,int n)
{
    int cnt0=0;
    for(auto it:s)
    {
        if(it=='0')
        {
            cnt0++;
        }
    }
    if(cnt0>n-cnt0)
    {
        return 1;
    }
    if(s[0]!=s[1])
    {
        return 1;
    }
     return 0;
}
int main()
{
    int t;
    // cout << "Enter testcases" << " " << endl;
    cin >> t;
    while (t--)
    {
        int n;
        cin>>n;
        string s;
        for(int i=0;i<n;i++)
        {
            char a;
            cin>>a;
            s.push_back(a);
        }
        int ans=find(s,n);
        if(ans==0)
        {
            cout<<"NO"<<" "<<endl;
        }
        else
        {
            cout<<"YES"<<" "<<endl;
        }
    }
    return 0;
}