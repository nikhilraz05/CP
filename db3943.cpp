#include <iostream>
#include <bits/stdc++.h>
using namespace std;
typedef long long int lli;
int find(vector<char>& a,vector<char>& b,int n,int m)
{
    int ans=0;
    int i=0,j=0;
    while(i<n || j<m)
    {
        while(i<n && j<m && a[i]==b[j])
        {
            i++;
            j++;
            ans++;
        }
        j++;
        if(j>=m) break;
    }
    return ans;
}
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n,m;
        cin>>n>>m;
        vector<char>a,b;
        for(int i=0;i<n;i++)
        {
            char c;
            cin>>c;
            a.push_back(c);
        }
        for(int i=0;i<m;i++)
        {
            char c;
            cin>>c;
            b.push_back(c);
        }
        int ans=find(a,b,n,m);
        cout << ans << " " << endl;
    }
    return 0;
}