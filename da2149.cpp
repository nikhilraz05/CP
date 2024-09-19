#include <iostream>
#include <bits/stdc++.h>
using namespace std;
typedef long long int lli;
pair<int,vector<int>> find(int x,int k)
{
    if(x<k)
    {
        return {1,{x}};
    }
    if(x%k!=0)
    {
        return {1,{x}};
    }
    vector<int>v;
    for(int i=2;i<=x;i++)
    {
        if(i%k!=0 && (x-i)%k!=0)
        {
            v.push_back(i);
            v.push_back(x-i);
            break;
        }
    }
    return {2,{v}};
}
int main()
{
    int t;
    // cout << "Enter testcases" << " " << endl;
    cin >> t;
    while (t--)
    {
        int x,k;
        // cout<<"enter x,k"<<" "<<endl;
        cin>>x>>k;
        pair<int,vector<int>> ans=find(x,k);
        cout<<ans.first<<" "<<endl;
        for(auto it:ans.second)
        {
            cout<<it<<" ";
        }
        cout<<endl;
    }
    return 0;
}