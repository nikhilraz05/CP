#include <iostream>
#include <bits/stdc++.h>
using namespace std;
typedef long long int lli;
pair<int,vector<int>> find(int n)
{
    if(n<=6)
    {
        return {0,{}};
    }
    int a=1,b=2,c=4;
    if(n==7)
    {
        return {1,{a,b,c}};
    }
    int cnt=0;
    int d=n-(a+b);
    if(d%3!=0)
    {
        return {1,{a,b,d}};
    }
    cnt=1;
    while(cnt<3)
    {
        d--;
        b++;
        if(b%3==0)
        {
            cnt++;
        }
        if(b%3!=0 && d%3!=0 && b!=d)
        {
            return {1,{a,b,d}};
        }
    }
    return {0,{a,b,d}};
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
        pair<int,vector<int>>ans=find(n);
        if(ans.first==0)
        {
            cout<<"NO"<<endl;
        }
        else
        {
            cout<<"YES"<<endl;
            for(auto it:ans.second)
            {
                cout<<it<<" ";
            }
        }
        cout<<endl;
    }
    return 0;
}