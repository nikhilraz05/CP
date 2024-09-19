#include <iostream>
#include <bits/stdc++.h>
using namespace std;
typedef long long int lli;
pair<int,vector<pair<int,int>>> find(vector<int>& v,int n)
{
    sort(v.begin(),v.end());
    vector<pair<int,int>>res;
    int i=0,j=n-1;
    while(i<=j)
    {
        res.push_back({v[j],v[i]});
        i++;
        j--;
    }
    int ans=0;
    for(int k=1;k<n/2;k++)
    {
        ans+=(abs(res[k-1].first-res[k].first)+abs(res[k-1].second-res[k].second));
    }
    return {ans,res};
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
        vector<int>v;
        // cout<<"enter value"<<" "<<endl;
        for(int i=0;i<2*n;i++)
        {
            int a;
            cin>>a;
            v.push_back(a);
        }
        pair<int,vector<pair<int,int>>> ans=find(v,2*n);
        cout<<ans.first<<" "<<endl;
        for(auto it:ans.second)
        {
           cout<<it.first<<" "<<it.second<<" "<<endl;
        }
    }
    return 0;
}