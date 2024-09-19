#include <iostream>
#include <bits/stdc++.h>
using namespace std;
typedef long long int lli;
int find(vector<int>& v,int n)
{
    int sum=0;
    sort(v.begin(),v.end());
    int i=0,j=n-1;
    while(i<=j)
    {
        int a=max(v[i],v[j]);
        int b=min(v[i],v[j]);
        sum+=(a-b);
        i++;
        j--;
    }
    return sum;
}
int main()
{
    int t;
    // cout << "Enter testcases" << " " << endl;
    cin >> t;
    while (t--)
    {
        int n;
        // cout<<"enter n"<<" "<<endl;
        cin>>n;
        // cout<<"enter values"<<" "<<endl;
        vector<int>v;
        for(int i=0;i<n;i++)
        {
            int a;
            cin>>a;
            v.push_back(a);
        }
        int ans=find(v,n);
        cout << ans << " " << endl;
    }
    return 0;
}