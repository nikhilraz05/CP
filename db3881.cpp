#include <iostream>
#include <bits/stdc++.h>
using namespace std;
typedef long long int lli;
lli mod=1e9+7;
pair<lli,lli> find(vector<lli>& v)
{
    int i=0,j=0;
    lli sum=0;
    lli cnt=0;
    for(;j<v.size();)
    {
        if(j<v.size() && v[j]<0)
        {
            while(j<v.size() && v[j]<=0)
            {
                sum+=abs(v[j]);
                j++;
            }
            cnt++;
        }
        if(j<v.size())
        {
            sum+=abs(v[j]);
        }
        j++;
        i=j;
    }
    return {sum,cnt};
}
int main()
{
    int t;
    // cout << "Enter testcases" << " " << endl;
    cin >> t;
    while (t--)
    {
        lli n;
        // cout<<"enter n"<<" "<<endl;
        cin>>n;
        vector<lli>v;
        // cout<<"enter values"<<" "<<endl;
        for(int i=0;i<n;i++)
        {
            lli a;
            cin>>a;
            v.push_back(a);
        }
        pair<lli,lli> ans=find(v);
        cout<<ans.first<<" "<<ans.second<<" "<<endl;
    }
    return 0;
}