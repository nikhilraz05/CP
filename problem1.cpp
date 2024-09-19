#include <iostream>
#include <bits/stdc++.h>
using namespace std;
typedef long long int lli;
int dx[2]={0,1};
int dy[2]={1,0};
int find(int i,int j,int m,int n,vector<vector<int>>& v)
{
    if(i==m-1 && j==n-1)
    {
        return v[m-1][n-1];
    }
    if(i<0 || i>=m || j<0 || j>=n)
    {
        return 0;
    }
    int ans=0;
    for(int k=0;k<2;k++)
    {
        int newi=i+dx[k];
        int newj=j+dy[k];
        if(newi>=0 && newi<m && newj>=0 && newj<n)
        {
            ans=max(ans,v[newi][newj]+find(newi,newj,m,n,v));
        }
    }
    return ans;
}
int main()
{
    int m,n;
    cin>>m>>n;
    vector<vector<int>>v;
    for(int i=0;i<m;i++)
    {
        vector<int>v1;
        for(int j=0;j<n;j++)
        {
            int a;
            cin>>a;
            v1.push_back(a);
        }
        v.push_back(v1);
    }
    int ans=find(0,0,m,n,v)+v[0][0];
    cout<<ans<<endl;
    return 0;
}