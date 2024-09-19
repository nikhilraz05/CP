#include <iostream>
#include <bits/stdc++.h>
using namespace std;
typedef long long int lli;
int find(vector<int>& v,int n)
{
    map<int,int>mp;
    for(int i=0;i<n;i++)
    {
        // cout<<i<<" "<<v[i]<<"hii "<<endl;
        mp[i+1]=v[i];
    }
    int ans=n+2;
    for(auto it=mp.begin();it!=mp.end();)
    {
        set<int>st;
        int a=it->first;
        int b=it->second;
        st.insert(a);
        int cnt=0;
        while(mp.find(b)!=mp.end() && cnt<3)
        {
            if(b!=a)
            {
                a=b;
                b=mp[b];
                st.insert(a);
            }
            if(b==a)
            {
                b=mp[b];
                st.insert(b);
                break;
            }
            cnt++;
        }
        int c=st.size();
        ans=min(ans,c);
        st.clear();
        it++;
    }
    return ans;
}
int main()
{
    int t;
    cout<<"Enter testcases";
    cin >> t;
    while (t--)
    {
        int n;
        cout<<"enter n"<<" "<<endl;
        cin>>n;
        vector<int>v;
        cout<<"enter value"<<" "<<endl;
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