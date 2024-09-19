#include <iostream>
#include <bits/stdc++.h>
using namespace std;
typedef long long int lli;
int find(vector<int>& v,int n,int x)
{
    int fuel=v[0]-0;
    for(int i=1;i<n;i++)
    {
        fuel=max(fuel,v[i]-v[i-1]);
    }
    fuel=max(fuel,2*(x-v[n-1]));
    return fuel;
}
int main()
{
    int t;
    // cout<<"Enter testcases";
    cin >> t;
    while (t--)
    {
        int n,x;
        // cout<<"enter n,x"<<" "<<endl;
        cin>>n>>x;
        vector<int>v;
        // cout<<"enter values"<<" ";
        for(int i=0;i<n;i++)
        {
            int a;
            cin>>a;
            v.push_back(a);
        }
        int ans=find(v,n,x);
        cout<<ans<<" "<<endl;
    }
    return 0;
}