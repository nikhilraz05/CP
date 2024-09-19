#include <iostream>
#include <bits/stdc++.h>
using namespace std;
typedef long long int lli;
int find(vector<int>& v,int n)
{
    int cnt=0;
    int prev=0;
    for(int i=0;i<n;i++)
    {
        if(v[i]%2==1)
        {
            if(prev==1)
            {
                cnt++;
            }
            prev=1;
        }
        else
        {
            if(prev==2)
            {
                cnt++;
            }
            prev=2;
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
        int n;
        // cout << "enter n" << " " << endl;
        cin >> n;
        vector<int>v;
        // cout<<"enter v"<<" "<<endl;
        for(int i=0;i<n;i++)
        {
            int a;
            cin>>a;
            v.push_back(a);
        }
        int ans=find(v,n);
        cout << ans << " " << endl;
    }
    return 0;
}