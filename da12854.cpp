#include <iostream>
#include <bits/stdc++.h>
using namespace std;
typedef long long int lli;
vector<int>find(vector<int>& v,int m,int n)
{
    vector<int>ans;
    set<int>st;
    for(int i=0;i<m;i++)
    {
        if(ans.size()==n)
        {
            break;
        }
        if(st.find(v[i])==st.end())
        {
            st.insert(v[i]);
            ans.push_back(i+1);
        }
    }
    if(ans.size()<n)
    {
        for(int i=0;;i++)
        {
            if(ans.size()==n)
            {
                break;
            }
            ans.push_back(-1);
        }
        reverse(ans.begin(),ans.end());
        return ans;
    }
    else
    {
        reverse(ans.begin(),ans.end());
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
        int n,m;
        cin>>n>>m;
        vector<int>v;
        for(int i=0;i<m;i++)
        {
            int a;
            cin>>a;
            v.push_back(a);
        }
        vector<int>ans=find(v,m,n);
        for(auto it:ans)
        {
            cout<<it<<" ";
        }
        cout<<endl;
    }
    return 0;
}