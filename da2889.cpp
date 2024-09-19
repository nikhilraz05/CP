#include <iostream>
#include <bits/stdc++.h>
using namespace std;
typedef long long int lli;
int find(vector<int>& v,int n)
{
    int cnt=0;
    for(int i=0;i<n;i++)
    {
       if(i+1==v[i])
       {
        cnt++;
       }
    }
    if(cnt==0)
    {
        return 0;
    }
    if(cnt==1)
    {
        return 1;
    }
    return (cnt%2==0?cnt/2:(cnt/2)+1);
}
int main()
{
    int t;
    // cout << "Enter testcases" << " " << endl;
    cin >> t;
    while (t--)
    {
        int n;
        // cout << "ente n" << " " << endl;
        cin >> n;
        // cout << "enter values" << " " << endl;
        vector<int> v;
        for (int i = 0; i < n; i++)
        {
            int a;
            cin >> a;
            v.push_back(a);
        }
        int ans=find(v,n);
        cout<<ans<<" "<<endl;
    }
    return 0;
}