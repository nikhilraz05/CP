#include <iostream>
#include <bits/stdc++.h>
using namespace std;
typedef long long int lli;
int find(vector<int>& v,int n)
{
    int cnt=0;
    for(auto it:v)
    {
        if(it==2)
        {
            cnt++;
        }
    }
    if(cnt%2==1) return -1;
    cnt=cnt/2;
    for(int i=0;i<n;i++)
    {
        if(v[i]==2)
        {
            cnt--;
        }
        if(cnt==0) return i+1;
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
        // cout << "enter n" << " " << endl;
        cin >> n;
        // cout<<"enter v"<<" "<<endl;
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