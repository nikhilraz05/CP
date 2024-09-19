#include <iostream>
#include <bits/stdc++.h>
using namespace std;
typedef long long int lli;
int find(vector<int>& v,int n)
{
    int ans=1e9+7;
    for(auto it:v)
    {
       ans=min(ans,abs(it));
    }
    return ans;
}
int main()
{
    
        int n;
        // cout << "ente n" << endl;
        cin >> n;
        vector<int>v;
        // cout<<"enter values"<<" "<<endl;
        for(int i=0;i<n;i++)
        {
            int a;
            cin>>a;
            v.push_back(a);
        }
        int ans = find(v,n);
        cout << ans << " " << endl;
    return 0;
}