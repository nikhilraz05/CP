#include <iostream>
#include <bits/stdc++.h>
using namespace std;
typedef long long int lli;
pair<int,vector<vector<char>>> find(vector<vector<char>>& v,int n,int m)
{
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            if(v[i][j]=='W')
            {
                if(i-1>=0)
                {
                    if(v[i-1][j]=='S')
                    {
                        return {0,{}};
                    }
                    else
                    {
                        v[i-1][j]='D';
                    }
                }
                if(i+1<n)
                {
                    if(v[i+1][j]=='S')
                    {
                        return {0,{}};
                    }
                    else
                    {
                        v[i+1][j]='D';
                    }
                }
                if(j+1<m)
                {
                    if(v[i][j+1]=='S')
                    {
                        return {0,{}};
                    }
                    else
                    {
                        v[i][j+1]='D';
                    }
                }
                if(j-1>=0)
                {
                    if(v[i][j-1]=='S')
                    {
                        return {0,{}};
                    }
                    else
                    {
                        v[i][j-1]='D';
                    }
                }
            }
        }
    }
    return {1,v};
}
int main()
{
    // int t;
    // // cout << "Enter testcases" << " " << endl;
    // cin >> t;
    // while (t--)
    // {
        int n,m;
        cin>>n>>m;
        vector<vector<char>>v;
        for(int i=0;i<n;i++)
        {
            vector<char>v1;
            for(int j=0;j<m;j++)
            {
                char c;
                cin>>c;
                v1.push_back(c);
            }
            v.push_back(v1);
        }
        pair<int,vector<vector<char>>>ans=find(v,n,m);
        if(ans.first==0)
        {
            cout<<"No";
        }
        else
        {
            cout<<"YES"<<endl;
            for(int i=0;i<n;i++)
            {
                for(int j=0;j<m;j++)
                {
                    cout<<ans.second[i][j];
                }
                cout<<endl;
            }
        }
    // }
    return 0;
}