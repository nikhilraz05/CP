#include <iostream>
#include <bits/stdc++.h>
using namespace std;
typedef long long int lli;
int find(vector<int>& v1,int n,vector<int>& v2,int m)
{
    lli sum1=0,sum2=0;
    for(int i=0;i<n;i++)
    {
        sum1+=v1[i];
    }
    for(int j=0;j<m;j++)
    {
        sum2+=v2[j];
    }
    if(sum1==sum2) return 0;
    if(sum1>sum2) return 1;
    return 2;
}
int main()
{
    int t;
    // cout << "Enter testcases" << " " << endl;
    cin >> t;
    while (t--)
    {
        int n,m;
        // cout<<"enter n,m"<<" "<<endl;
        cin>>n>>m;
        // cout<<"enter v1"<<" "<<endl;
        vector<int>v1,v2;
        for(int i=0;i<n;i++)
        {
            int a;
            cin>>a;
            v1.push_back(a);
        }
        // cout<<"enter v2"<<" "<<endl;
        for(int i=0;i<m;i++)
        {
            int a;
            cin>>a;
            v2.push_back(a);
        }
        int ans=find(v1,n,v2,m);
        if(ans==0)
        {
            cout<<"Draw"<<" "<<endl;
        }
        else if(ans==1)
        {
            cout<<"Tsondu"<<" "<<endl;
        }
        else
        {
            cout<<"Tenzing"<<" "<<endl;
        }
        // cout << ans << " " << endl;
    }
    return 0;
}