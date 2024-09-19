#include <iostream>
#include <bits/stdc++.h>
using namespace std;
typedef long long int lli;
int find(vector<int>& v,int m,int k,int h)
{
    int cnt=0;
    for(auto it:v)
    {
        int a=abs(it-h);
        if(a==0)
        {
            continue;
        }
        if(a%k!=0)
        {
            continue;
        }
        if(a%k==0 && a!=0)
        {
           if( m<=a/k )
           {
            continue;
           }
           else
           {
            // cout<<"hii"<<" ";
            cnt++;
           }
        }
    }
    return cnt;
}
int main()
{
    int t;
    // cout << "Enter testcases" << " " << endl;
    cin >> t;
    while (t--)
    {
        int n,m,k,h;
        // cout<<"enter n,m,k,n"<<" "<<endl;
        cin>>n>>m>>k>>h;
        vector<int>v;
        // cout<<"enter values"<<" "<<endl;
        for(int i=0;i<n;i++)
        {
            int a;
            cin>>a;
            v.push_back(a);
        }
        int ans=find(v,m,k,h);
        cout<<ans<<" "<<endl;
    }
    return 0;
}