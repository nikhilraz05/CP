#include <iostream>
#include <bits/stdc++.h>
using namespace std;
typedef long long int lli;
vector<int>find(vector<int>& v,int m)
{
    vector<int>ans;
    int i=0;
    int k=m;
    int cnt=0;
    for(;i<v.size();)
    {
       cnt=0;
       while(i<v.size() && k>=v[i])
       {
          k=k-v[i];
          i++;
          ans.push_back(cnt);
       }
       if(i>=v.size())
       {
         break;
       }
       cnt++;
       v[i]=v[i]-k;
       k=m;
       if(v[i]>0)
       {
        int a=k/v[i];
       cnt+=a;
       ans.push_back(cnt);
       k=k%v[i];
       }
       else
       {
         ans.push_back(cnt);
       }
       i++;
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
        int n,m;
        cin>>n>>m;
        vector<int>v;
        for(int i=0;i<n;i++)
        {
            int a;
            cin>>a;
            v.push_back(a);
        }
        vector<int>ans=find(v,m);
        for(auto it:ans)
        {
            cout<<it<<" ";
        }
        cout<<endl;
    // }
    return 0;
}