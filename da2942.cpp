#include <iostream>
#include <bits/stdc++.h>
using namespace std;
typedef long long int lli;
int find(vector<int>& a,vector<int>& b,int n)
{
    int i=0,j=0;
    int cnt=0;
    while(i<n || j<n)
    {
        while(i<n && j<n && b[i]<a[j])
        {
            cnt++;
            i++;
        }
        i++;
        if(i>=n)
        {
            break;
        }
        j++;
    }
    return cnt;
}
int main()
{
    int t;
    // cout << "Enter testcases" << " " << endl;
    cin >> t;
    while (t--)
    {
        int n;
        // cout << "ente n" << endl;
        cin >> n ;
        vector<int>v1,v2;
        for(int i=0;i<n;i++)
        {
            int a;
            cin>>a;
            v1.push_back(a);
        }
        for(int i=0;i<n;i++)
        {
            int a;
            cin>>a;
            v2.push_back(a);
        }
        int ans = find(v1,v2,n);
        cout << ans << " " << endl;
    }
    return 0;
}