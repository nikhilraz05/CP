#include <iostream>
#include <bits/stdc++.h>
using namespace std;
typedef long long int lli;
int find(vector<int>& v,int n)
{
    int i=n-1;
    while(i>=0)
    {
       if(v[i-1]>v[i])
       {
         break;
       }
       i--;
    }
    if(i==0) return 0;
    int ans=0;
    for(int k=0;k<=i;k++)
    {
        ans=max(ans,v[k]);
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