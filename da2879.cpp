#include <iostream>
#include <bits/stdc++.h>
using namespace std;
typedef long long int lli;
int find(vector<int>& v,int n)
{
    int cntve=0,cntnve=0;
    for(auto it:v)
    {
        if(it==1)
        {
            cntve++;
        }
        else
        {
            cntnve++;
        }
    }
    if(cntnve==0) return 0;
    if(cntve>cntnve)
    {
        if(cntnve%2==0) return 0;
        else
        {
            return 1;
        }
    }
    int a=(abs(cntve-cntnve)%2==0?abs(cntve-cntnve)/2:(abs(cntve-cntnve)/2)+1);
    cntve+=a;
    cntnve-=a;
    if(cntnve%2==0) return a;
    return a+1;
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
        vector<int>v;
        // cout<<"enter v"<<" "<<endl;
        for(int i=0;i<n;i++)
        {
            int a;
            cin>>a;
            v.push_back(a);
        }
        int ans=find(v,n);
        cout<<ans<<" "<<endl;
    }
    return 0;
}