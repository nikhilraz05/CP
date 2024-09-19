#include <iostream>
#include <bits/stdc++.h>
using namespace std;
typedef long long int lli;
lli find(vector<int>& v,int n)
{
    sort(v.begin(),v.end());
    int i=0,j=n-1;
    lli ans=0;
    while(i<j)
    {
        lli a=(v[i]+v[j])*(v[i]+v[j]);
        ans+=a;
        i++;
        j--;
    }
    return ans;
}
int main()
{
    // int t;
    // // cout << "Enter testcases" << " " << endl;
    // cin >> t;
    // while (t--)
    // {
        int n;
        cin>>n;
        vector<int>v;
        for(int i=0;i<n;i++)
        {
            int a;
            cin>>a;
            v.push_back(a);
        }
        
        lli ans=find(v,n);
        cout<<ans<<endl;
    // }
    return 0;
}