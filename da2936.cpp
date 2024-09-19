#include <iostream>
#include <bits/stdc++.h>
using namespace std;
typedef long long int lli;
int find(vector<int>& v,int n)
{
    int med=(n-1)/2;
    sort(v.begin(),v.end());
    int a=v[med]+1;
    int ans=1;
    for(int i=med+1;i<n;i++)
    {
        if(v[i]<a)
        {
            ans++;
        }
        else
        {
            break;
        }
    }
    return ans;
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
        vector<int>v;
        for(int i=0;i<n;i++)
        {
            int a;
            cin>>a;
            v.push_back(a);
        }
        int ans = find(v,n);
        cout << ans << " " << endl;
    }
    return 0;
}