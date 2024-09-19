#include <iostream>
#include <bits/stdc++.h>
using namespace std;
typedef long long int lli;
lli max(lli a,lli b)
{
    if(a>b) return a;
    return b;
}
lli min(lli a,lli b)
{
    if(a>b) return b;
    return a;
}
lli find(vector<pair<lli,lli>>& v, int n)
{
    lli start=-1,end=1e9+7;
    set<lli>st;
    for(lli i=0;i<n;i++)
    {
       if(v[i].first==1)
       {
          start=max(start,v[i].second);
       }
       else if(v[i].first==2)
       {
         end=min(end,v[i].second);
       }
       else
       {
         st.insert(v[i].second);
       }
    }
    lli ans=0;
    // cout<<start<<" "<<end<<" "<<endl;
    ans=end-start+1;
    while(st.size()>0)
    {
        lli a=*(st.begin());
        if(a>=start && a<=end)
        {
            ans--;
        }
        st.erase(st.begin());
    }
    return ans>=0?ans:0;
}   
int main()
{
    int t;
    // cout<<"Enter testcases";
    cin >> t;
    while (t--)
    {
        int n;
        vector<pair<lli,lli>>v;
        // cout<<"enter size"<<" "<<endl;
        cin>>n;
        // cout<<"enter values"<<" "<<endl;
        for(int i=0;i<n;i++)
        {
            lli a,b;
            // cout<<"enter a,b"<<" "<<endl;
            cin>>a>>b;
            v.push_back({a,b});
        }
        lli ans = find(v,n);
        cout<<ans<<" "<<endl;
    }
    return 0;
}