#include <iostream>
#include <bits/stdc++.h>
using namespace std;
typedef long long int lli;
string find(vector<int>& v,int n,int k)
{
   for(auto it:v)
   {
     if(it==k) return "Yes";
   }
   return "NO";
}
int main()
{
    int t;
    // cout << "Enter testcases" << " " << endl;
    cin >> t;
    while (t--)
    {
        int n,k;
        // cout<<"enter n,k"<<" "<<endl;
        cin>>n>>k;
        vector<int>v;
        // cout<<"enter values"<<" "<<endl;
        for(int i=0;i<n;i++)
        {
            int a;
            cin>>a;
            v.push_back(a);
        }
        string ans = find(v,n,k);
        cout << ans << " " << endl;
    }
    return 0;
}