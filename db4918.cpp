#include <iostream>
#include <bits/stdc++.h>
using namespace std;
typedef long long int lli;
char find(vector<vector<char>> &v,int n,int m,int k1,int k2)
{
    vector<char>v1={'A','B','C'};
    set<char>st;
    for(int i=0;i<n;i++)
    {
        if(i!=k2)
        {
            st.insert(v[k1][i]);
        }
    }
    for(int i=0;i<m;i++)
    {
        if(i!=k1)
        {
            st.insert(v[i][k2]);
        }
    }
    for(auto it:v1)
    {
        if(st.find(it)!=st.end())
        {
            st.erase(it);
        }
        else
        {
            return it;
        }
    }
    return *(st.begin());
}
int main()
{
    int t;
    // cout<<"Enter testcases";
    cin >> t;
    while (t--)
    {
        int n,m;
        // cout<<"enter n & m"<<" "<<endl;
        // cin>>n>>m;
        vector<vector<char>>v;
        // cout<<"enter value"<<" "<<endl;
        int k1=-1,k2=-1;
        for(int i=0;i<3;i++)
        {
            vector<char>v1;
            for(int j=0;j<3;j++)
            {
                char a;
                cin>>a;
                if(a=='?')
                {
                    k1=i;
                    k2=j;
                }
                v1.push_back(a);
            }
            // cout<<" "<<endl;
            v.push_back(v1);
        }
        char ans=find(v,3,3,k1,k2);
        cout<<ans<<" "<<endl;
    }
    return 0;
}