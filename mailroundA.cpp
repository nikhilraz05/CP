#include <iostream>
#include <bits/stdc++.h>
using namespace std;
typedef long long int lli;
string find(vector<int>& v1,vector<int>& v2,int s)
{
    if(v1[0]==0)
    {
        return "NO";
    }
    int i=0;
    for(;i<v1.size();i++)
    {
        if(i==s-1 && v1[i]==1) return "YES";
        if(v1[i]==1 && v2[i]==1 && i>s-1)
        {
            break;
        }
    }
    if(i>=v1.size()) return "NO";
    for(int j=i;j>=0;j--)
    {
        if(j<s-1) break;
        if(j==s-1 && v2[j]==1) return "YES";
    }
    return "NO";
}
int main()
{
    // int t;
    // // cout << "Enter testcases" << " " << endl;
    // cin >> t;
    // while (t--)
    // {
        int n,s;
        cin>>n>>s;
        vector<int>v1,v2;
        for(int i=0;i<n;i++)
        {
            int a;
            cin>>a;
            v1.push_back(a);
        }
        for(int i=0;i<n;i++)
        {
            int a;
            cin>>a;
            v2.push_back(a);
        }
        string ans=find(v1,v2,s);
        cout<<ans<<endl;
    // }
    return 0;
}