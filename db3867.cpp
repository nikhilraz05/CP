#include <iostream>
#include <bits/stdc++.h>
using namespace std;
typedef long long int lli;
lli find(vector<lli>& v,int n)
{
    sort(v.begin(),v.end());
    lli ans=-(1e18+7);
    int i=0,j=1;
    int cnt=0;
    for(;j<n;)
    {
        while(j<n && v[j]==0)
        {
            j++;
            cnt++;
        }
        if(j<n)
        {
            // cout<<i<<" "<<j<<" "<<endl;
            ans=max(ans,(lli)(v[i]*v[j]));
        }
        i=j;
        j++;
    }
    if(ans<0 && cnt>0)
    {
        ans=0;
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
        cin >> n;
        // cout<<"enter values 1"<<" "<<endl;
        vector<lli> v;
        for (int i = 0; i < n; i++)
        {
            lli a;
            cin >> a;
            v.push_back(a);
        }
        lli ans = find(v, n);
        cout << ans << " " << endl;
    }
    return 0;
}