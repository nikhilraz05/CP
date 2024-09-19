#include <iostream>
#include <bits/stdc++.h>
using namespace std;
typedef long long int lli;
vector<int> res;
vector<int> find(int n, int s, int r) {
    int mx = s - r;
    vector<int> v;
    
    return v;
}
int main()
{
    int t;
    // cout << "Enter testcases" << " " << endl;
    cin >> t;
    while (t--)
    {
        int n,s,r;
        cin>>n>>s>>r;
        vector<int>ans=find(n,s,r);
        for(auto it:ans)
        {
            cout<<it<<" ";
        }
        cout<<endl;
    }
    return 0;
}