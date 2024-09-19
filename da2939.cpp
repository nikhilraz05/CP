#include <iostream>
#include <bits/stdc++.h>
using namespace std;
typedef long long int lli;
vector<int>find(vector<int>v1,vector<int>v2,int k,int q)
{
    int mx=INT_MAX;
    for(auto it:v1)
    {
        mx=min(mx,it);
    }
    vector<int>res;
    for(auto it:v2)
    {
        if(it>=mx)
        {
            res.push_back(mx-1);
        }
        else
        {
            res.push_back(it);
        }
    }
    return res;
}
int main()
{
    int t;
    // cout << "Enter testcases" << " " << endl;
    cin >> t;
    while (t--)
    {
        int k,q;
        cin>>k>>q;
        vector<int>v1;
        for(int i=0;i<k;i++)
        {
            int a;
            cin>>a;
            v1.push_back(a);
        }
        vector<int>v2;
        for(int i=0;i<q;i++)
        {
            int a;
            cin>>a;
            v2.push_back(a);
        }
        vector<int>ans=find(v1,v2,k,q);
        for(auto it:ans)
        {
            cout<<it<<" ";
        }
        cout<<endl;
    }
    return 0;
}