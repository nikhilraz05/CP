#include <iostream>
#include <bits/stdc++.h>
using namespace std;
typedef long long int lli;
vector<int> find(vector<int>& v,int n)
{
    vector<int>v1;
    v1.push_back(v[0]);
    for(int i=1;i<n;i++)
    {
       if(v[i-1]<=v[i])
       {
          v1.push_back(v[i]);
       }
       else
       {
         v1.push_back(1);
         v1.push_back(v[i]);
       }
    }
    return v1;
}
int main()
{
    int t;
    // cout << "Enter testcases" << " " << endl;
    cin >> t;
    while (t--)
    {
        int n ;
        // cout << "ente n" << endl;
        cin >> n;
        // cout<<"enter values"<<endl;
        vector<int>v;
        for(int i=0;i<n;i++)
        {
            int b;
            cin>>b;
            v.push_back(b);
        }
        vector<int> ans = find(v,n);
        cout<<ans.size()<<endl;
        for(auto it:ans)
        {
            cout<<it<<" ";
        }
        cout<<endl;
    }
    return 0;
}