#include <iostream>
#include <bits/stdc++.h>
using namespace std;
typedef long long int lli;
int find(vector<int>& v1,vector<int>& v2,int n,int m,int K)
{
    sort(v1.begin(),v1.end());
    sort(v2.begin(),v2.end());
    int i=0;
    int j=0,k=0;
    int ans=0;
    for(int i=0;i<n;i++)
    {
        while(k<m && i<n &&  v1[i]+v2[k]<=K)
        {
            k++;
        }
        k=k-1;
        if(k<0) break;
        // ans+=(k-j+1);
        int rind=k;
        if(i>0 && v1[i]+v2[k]>K)
        {
            while(k>=0 && i<n && v1[i]+v2[k]>K)
            {
                k--;
            }
            // ans+=(k-j+1);
        }
        ans+=(k-j+1);
        k=rind;
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
        int n,m,k;
        cin >> n>>m>>k;
        vector<int>v1,v2;
        for(int i=0;i<n;i++)
        {
            int a;
            cin>>a;
            v1.push_back(a);
        }
        for(int i=0;i<m;i++)
        {
            int a;
            cin>>a;
            v2.push_back(a);
        }
        int ans = find(v1,v2,n,m,k);
        cout << ans << " " << endl;
    }
    return 0;
}