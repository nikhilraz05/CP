#include <iostream>
#include <bits/stdc++.h>
using namespace std;
typedef long long int lli;
int find(vector<int>& v,int n)
{
    int cnt1=0,cnt2=0;
    int mn=1e9+7;
    for(auto it:v)
    {
        if(it%2!=0)
        {
            cnt1++;
        }
        else
        {
            cnt2++;
        }
        mn=min(mn,it);
    }
    if(cnt1==n) return 1;
    if(cnt2==n) return 1;
    if(mn%2==1)
    {
        return 1;
    }
    return 0;

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
        if(ans==1)
        {
            cout<<"YES"<<" "<<endl;
        }
        else
        {
            cout<<"NO"<<" "<<endl;
        }
    }
    return 0;
}