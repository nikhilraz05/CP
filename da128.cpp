#include <iostream>
#include <bits/stdc++.h>
using namespace std;
typedef long long int lli;
pair<int,vector<int>>find(int n,int k)
{
    vector<int>ans;
    if(n==k)
    {
        for(int i=1;i<n+1;i++)
        {
            ans.push_back(1);
        }
    }
    else if(k==1)
    {
        for(int i=1;i<n+1;i++)
        {
            ans.push_back(i);
        }
    }
    else
    {
        return {0,{}};
    }
    return {1,{ans}};
}
int main()
{
    int t;
    // cout << "Enter testcases" << " " << endl;
    cin >> t;
    while (t--)
    {
        int n,k;
        cin >> n>>k;
        pair<int,vector<int>>ans = find(n,k);
        if(ans.first==0)
        {
            cout<<-1<<" ";
        }
        else
        {
            for(auto it:ans.second)
            {
                cout<<it<<" ";
            }
        }
        cout<<endl;
    }
    return 0;
}