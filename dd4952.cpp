#include <iostream>
#include <bits/stdc++.h>
using namespace std;
typedef long long int lli;
pair<int,int>find(vector<vector<char>>& v,int n,int m)
{
    pair<int,int>res;
    int ans=0;
    for(int i=0;i<n;i++)
    {
        int cnt=0;
        int j=0;
        int start=INT_MAX;
        int end=INT_MIN;
        for(;j<m;j++)
        {
            if(v[i][j]=='#')
            {
                cnt++;
                if(start>j)
                {
                    start=j;
                }
                if(end<j)
                {
                    end=j;
                }
            }
        }
        if(ans<cnt)
        {
            ans=cnt;
            int a=(end+start)/2;
            res={i+1,a+1};
        }
    }
    return res;
}
int main()
{
    int t;
    // cout << "Enter testcases" << " " << endl;
    cin >> t;
    while (t--)
    {
        int n,m;
        cin>>n>>m;
        vector<vector<char>>v;
        for(int i=0;i<n;i++)
        {
            vector<char>v1;
            for(int j=0;j<m;j++)
            {
                char a;
                cin>>a;
                v1.push_back(a);
            }
            v.push_back(v1);
        }
        pair<int,int>ans=find(v,n,m);
        cout<<ans.first<<" "<<ans.second<<endl;
    }
    return 0;
}