#include <iostream>
#include <bits/stdc++.h>
using namespace std;
typedef long long int lli;
int find(vector<int>& v,int n)
{
    if(n<=3)
    {
        return 1;
    }
    if(n==4)
    {
        if(v[2]>v[3])
        {
            return 0;
        }
        return 1;
    }
    int a=log2(n);
    int m=1;
    int i=pow(2,m);
    for(;i<n;)
    {
        int j=pow(2,m+1)-1;
        if(j>=n)
        {
            j=n-1;
        }
        while(i+1<n && j<n && i+1<=j)
        {
            if(i+1<n && v[i]>v[i+1])
            {
                return 0;
            }
            i++;
        }
        m++;
        i=j+1;
    }
    return 1;
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
        vector<int>v;
        for(int i=0;i<n;i++)
        {
            int a;
            cin>>a;
            v.push_back(a);
        }
        int ans=find(v,n);
        if(ans==0)
        {
            cout<<"NO"<<" "<<endl;
        }
        else
        {
            cout<<"YES"<<" "<<endl;
        }
    }
    return 0;
}