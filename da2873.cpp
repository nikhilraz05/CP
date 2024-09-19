#include <iostream>
#include <bits/stdc++.h>
using namespace std;
typedef long long int lli;
vector<int> find(int n)
{
    if(n==1)
    {
        return {1};
    }
    if(n==2)
    {
        return {2,4};
    }
    vector<int>v;
    if(n%2!=0)
    {
        int sum=n*(n+1);
        sum=sum/2;
        int ans=0;
        for(int i=1;i<=n;i++)
        {
            ans+=i;
            v.push_back(i);
        }
    }
    else
    {
        int sum=n*(n+1);
        sum=sum*2;
        int ans=0;
        for(int i=2;i<=n;i++)
        {
            ans+=i;
            v.push_back(i);
        }
        v.push_back(sum-ans);
        vector<int>v1;
        v1.push_back(v.back());
        for(int i=0;i<v.size()-1;i++)
        {
            v1.push_back(v[i]);
        }
        v.clear();
        v=v1;
    }
    return v;
}
int main()
{
    int t;
    // cout << "Enter testcases" << " " << endl;
    cin >> t;
    while (t--)
    {
        int n;
        // cout << "ente n" << endl;
        cin >> n ;
        vector<int> ans = find(n);
        for(auto it:ans)
        {
            cout<<it<<" ";
        }
        cout<<endl;
    }
    return 0;
}