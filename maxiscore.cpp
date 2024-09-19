#include <iostream>
#include <bits/stdc++.h>
using namespace std;
typedef long long int lli;
int find(vector<int>& v,int n)
{
    sort(v.begin(),v.end());
    int ans=0;
    for(int i=0;i<2*n;i+=2)
    {
       ans+=min(v[i],v[i+1]);   
    }
    return ans;

}
int main()
{
    int t;
    // cout << "Enter testcases";
    cin >> t;
    while (t--)
    {
        int n;
        vector<int>v;
        // cout << "enter n" << " " << endl;
        cin >> n;
        for(int i=0;i<2*n;i++)
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