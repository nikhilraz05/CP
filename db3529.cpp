#include <iostream>
#include <bits/stdc++.h>
using namespace std;
typedef long long int lli;
int find(vector<int>& v)
{
    if(v.size()<=2) return 0;
    sort(v.begin(),v.end());
    int a=v[v.size()-2]-v[0];
    int b=v[v.size()-1]-v[1];
    return min(a,b);
}
int main()
{
    // int t;
    // // cout << "Enter testcases" << " " << endl;
    // cin >> t;
    // while (t--)
    // {
        int n;
        cin>>n;
        vector<int>v;
        for(int i=0;i<n;i++)
        {
            int a;
            cin>>a;
            v.push_back(a);
        }
        int ans=find(v);
        cout<<ans<<endl;
    // }
    return 0;
}