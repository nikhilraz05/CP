#include <iostream>
#include <bits/stdc++.h>
using namespace std;
typedef long long int lli;
string find(vector<int>& v)
{
    int prev=1,curr=2,f=3;
    int i=0;
    while(i<v.size())
    {
        if(prev==v[i] || curr==v[i])
        {
            if(prev==v[i])
            {
                prev=v[i];
                int a=curr;
                curr=f;
                f=a;
            }
            if(curr==v[i])
            {
                curr=v[i];
                int a=prev;
                prev=f;
                f=a;
            }
        }
        else
        {
            return "NO";
        }
        i++;
    }
    return "YES";
}
int main()
{
    // int t;
    // // cout << "Enter testcases" << " " << endl;
    // cin >> t;
    // while (t--)
    // {
        int n;
        cin >> n;
        vector<int>v;
        for(int i=0;i<n;i++)
        {
            int a;
            cin>>a;
            v.push_back(a);
        }
        string ans=find(v);
        cout << ans << " " << endl;
    // }
    return 0;
}