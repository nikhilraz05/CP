#include <iostream>
#include <bits/stdc++.h>
using namespace std;
typedef long long int lli;
int find(vector<int>& v,int n)
{
    int sum=v[0];
    sort(v.begin(),v.end());
    for(int i=0;i<n;i++)
    {
        if(sum>=v[i])
        {
            continue;
        }
        int a=(abs(v[i]-sum)%2==0?abs(v[i]-sum)/2:(abs(v[i]-sum)/2)+1);
        sum+=a;
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
        // cout<<"enter values"<<" "<<endl;
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