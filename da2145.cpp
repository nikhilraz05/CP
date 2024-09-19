#include <iostream>
#include <bits/stdc++.h>
using namespace std;
typedef long long int lli;
int find(string& s)
{
    vector<int>v(10,0);
    for(auto it:s)
    {
        v[it-'0']++;
    }
    int ans=0;
    for(auto it:v)
    {
        ans=max(ans,it);
    }
    if(ans==1) return 4;
    if(ans==3) return 6;
    if(ans==2) return 4;
    return -1;
}
int main()
{
    int t;
    // cout << "Enter testcases" << " " << endl;
    cin >> t;
    while (t--)
    {
        string s;
        // cout<<"enter s"<<" "<<endl;
        cin>>s;
        int ans = find(s);
        cout << ans << " " << endl;
    }
    return 0;
}