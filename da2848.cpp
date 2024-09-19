#include <iostream>
#include <bits/stdc++.h>
using namespace std;
typedef long long int lli;
int find(vector<int>& v,int n)
{
    int sum=0;
    int cnt=0;
    int i=0;
    int valid=0;
    for(;i<n;)
    {
        int valid1=0;
        if(v[i]==-1)
        {
            cnt++;
        }
        if(i+1<n && v[i]==-1 && v[i+1]==-1)
        {
            valid1=1;
            if(valid==0)
            {
                sum+=2;
                valid=1;
            }
            else
            {
                sum+=(2*v[i]);
            }
            i++;
        }
        if(valid1==1)
        {
            i++;
        }
        if(i<n)
        {
            sum+=v[i];
        }
        i++;
    }
    if(cnt==0)
    {
        sum-=(2*2);
    }
    return sum;
}
int main()
{
    int t;
    // cout << "Enter testcases" << " " << endl;
    cin >> t;
    while (t--)
    {
        int n;
        // cout<<"enter n"<<" "<<endl;
        cin>>n;
        vector<int>v;
        // cout<<"enter v"<<" "<<endl;
        for(int i=0;i<n;i++)
        {
            int a;
            cin>>a;
            v.push_back(a);
        }
        int ans=find(v,n);
        cout<<ans<<" "<<endl;
    }
    return 0;
}