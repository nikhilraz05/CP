#include <iostream>
#include <bits/stdc++.h>
using namespace std;
typedef long long int lli;
bool cmp(int a,int b)
{
    bool aodd = a % 2 == 1;
    bool bodd = b % 2 == 1;

    // If a is even and b is odd, a should come before b
    if (!aodd && bodd) return true;

    // If a is odd and b is even, b should come before a
    if (aodd && !bodd) return false;

    // If both are even or both are odd, maintain their relative order
    return a < b; // For
}
int find(vector<int>& v)
{
    sort(v.begin(),v.end(),cmp);
    
}
int main()
{
    // int t;
    // // cout << "Enter testcases" << " " << endl;
    // cin >> t;
    // while (t--)
    // {
        int n;
        cin>>n;
        vector<int>v;
        for(int i=0;i<n;i++)
        {
            int a;
            cin>>a;
            v.push_back(a);
        }
        int ans=find(v);
        cout<<ans<<endl;
    // }
    return 0;
}