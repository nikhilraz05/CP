#include <iostream>
#include <bits/stdc++.h>
using namespace std;
typedef long long int lli;
string find(vector<int>& v,int n)
{
    int a=v[0];
    if(n<=2) return "YES";
    int cnt=0;
    for(int i=1;i<n;i++)
    {
        if(v[i]<v[i-1])
        {
            if(v[i]<a)
            {
                cnt++;
            }
        }
        if(v[i]>v[i-1])
        {
            if(v[i]>a)
            {
                cnt++;
            }
        }
    }
    if(cnt>=2) return "NO";
    return "YES";
}
int main()
{
    int t;
    cout << "Enter testcases" << " " << endl;
    cin >> t;
    while (t--)
    {
        
        int n;
        cin>>n;
        vector<int>v;
        for(int i=0;i<n;i++)
        {
            int a;
            cin>>a;
            v.push_back(a);
        }
        string ans=find(v,n);
        cout<<ans<<" "<<endl;
    }
    return 0;
}