#include <iostream>
#include <bits/stdc++.h>
using namespace std;
typedef long long int lli;
int find(vector<vector<char>>& v,int n,int m)
{
    int ans=0;
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            if(v[i][j]=='X')
            {
                int a=i+1,b=j+1;
                if(a>5)
                {
                    a=10-a+1;
                }
                if(b>5)
                {
                    b=10-b+1;
                }
                ans+=min(a,b);
            }
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
        // int n,m;
        // // cout<<"enter n,m"<<" "<<endl;
        // cin>>n>>m;
        vector<vector<char>>v;
        // // cout<<"enter values"<<" "<<endl;
        for(int i=0;i<10;i++)
        {
            vector<char>v1;
            for(int j=0;j<10;j++)
            {
               char a;
               cin>>a;
               v1.push_back(a);
            }
            v.push_back(v1);
        }
        int  ans = find(v,10,10);
        cout << ans << " " << endl;
    }
    return 0;
}