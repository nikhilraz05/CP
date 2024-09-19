#include <iostream>
#include <bits/stdc++.h>
using namespace std;
typedef long long int lli;
vector<vector<char>> find(int n)
{
    vector<vector<char>>v(2*n,vector<char>(2*n,'.'));
    int m=n;
    n=2*n;
    bool a=1;
    int prev=0;
    for(int i=0;i<n;)
    {
        int j=0;
        for(;j<n;)
        {
            int ni=i;
            int nj=j;
            int ti=i+1;
            int tj=j+1;
            for(int k=ni;k<=ti && k<n;k++)
            {
                for(int l=nj;l<=tj && k<n;l++)
                {
                    if(a==1)
                    {
                        v[k][l]='#';
                    }
                    if(a==0)
                    {
                        v[k][l]='.';
                    }
                }
            }
            j=j+2;
            a=a^1;
        }
        i=i+2;
        if(i<n && v[i-1][0]=='.')
        {
            a=1;
        }
        else
        {
            a=0;
        }
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
        cin>>n;
        vector<vector<char>> ans=find(n);
        for(int i=0;i<ans.size();i++)
        {
            for(int j=0;j<ans[0].size();j++)
            {
                cout<<ans[i][j];
            }
            cout<<endl;
        }
    }
    return 0;
}