#include <iostream>
#include <bits/stdc++.h>
using namespace std;
typedef long long int lli;
int find(string& s1,string& s2,int n)
{
    int cnta1=0,cnta0=0;
    int cntb1=0,cntb0=0;
    for(int i=0;i<n;i++)
    {
        if(s1[i]!=s2[i])
        {
            if(s1[i]=='1')
            {
                cnta1++;
            }
            else
            {
                cnta0++;
            }
            if(s2[i]=='1')
            {
                cntb1++;
            }
            else
            {
                cntb0++;
            }
        }
    }
    return max((cntb1+cnta0)/2,(cnta1+cntb0)/2);
}
int main()
{
    int t;
    // cout << "Enter testcases" << " " << endl;
    cin >> t;
    while (t--)
    {
        int n;
        cin>>n;
        string s1,s2;
        for(int i=0;i<n;i++)
        {
            char a;
            cin>>a;
            s1.push_back(a);
        }
        for(int i=0;i<n;i++)
        {
            char a;
            cin>>a;
            s2.push_back(a);
        }
        int ans=find(s1,s2,n);
        cout<<ans<<" "<<endl;
    }
    return 0;
}