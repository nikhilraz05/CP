#include <iostream>
#include <bits/stdc++.h>
using namespace std;
typedef long long int lli;
string find(vector<int>& v,int n)
{
    int up=0,down=0;
    if(n==1 || n==2 || n==3) return "Yes";
    
}
int main()
{
    int t;
    cout<<"Enter testcases";
    cin >> t;
    while (t--)
    {
        int n;
        cout<<"enter n"<<" "<<endl;
        cin>>n;
        vector<int>v;
        cout<<"enter value"<<" "<<endl;
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