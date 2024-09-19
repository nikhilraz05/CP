#include <iostream>
#include <bits/stdc++.h>
using namespace std;
typedef long long int lli;
int find(vector<int>& v,int n)
{
    int cnt=0,cnt1=0;
    for(auto it:v)
    {
        if(it==1)
        {
            cnt++;
        }
        else
        {
            cnt1++;
        }
    }
    cnt=(cnt%2==0?cnt/2:(cnt/2)+1);
    return cnt+cnt1;
}
int main()
{
    int t;
    // cout << "Enter testcases" << " " << endl;
    cin >> t;
    while (t--)
    {
        int n;
        // cout << "enter n" << " " << endl;
        cin >> n;
        vector<int>v;
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