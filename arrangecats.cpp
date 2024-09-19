#include <iostream>
#include <bits/stdc++.h>
using namespace std;
typedef long long int lli;
int find(string &s1,string &s2, int n)
{
    int sum1=0,sum2=0,cnt=0;
    for(int i=0;i<n;i++)
    {
        if(s1[i]!=s2[i])
        {
            sum1+=(s1[i]-'0');
            sum2+=(s2[i]-'0');
            if(sum1!=sum2)
            {
                cnt++;
            }
        }
    }
    return cnt;
}
int main()
{
    int t;
    cout<<"Enter testcases";
    cin >> t;
    while (t--)
    {
        int n;
        vector<int> v;
        cout<<"enter n"<<" "<<endl;
        cin >> n;
        cout<<"enter value"<<" "<<endl;
        string s1,s2;
        cin>>s1>>s2;
        int ans = find(s1,s2,n);
        cout<<ans<<" "<<endl;
    }
    return 0;
}