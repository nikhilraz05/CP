#include <iostream>
#include <bits/stdc++.h>
using namespace std;
typedef long long int lli;
string find(string &s,int n)
{
    int x=0,y=0;
    for(int i=0;i<n;i++)
    {
        if(s[i]=='U')
        {
            y+=1;
        }
        if(s[i]=='D')
        {
            y-=1;
        }
        if(s[i]=='R')
        {
            x+=1;
        }
        if(s[i]=='L')
        {
            x-=1;
        }
        if(x==1 && y==1)
        {
            return "YES";
        }
    }
    return "NO";
}
int main()
{
    int t;
    // cout << "Enter testcases" << " " << endl;
    cin >> t;
    while (t--)
    {
        int n;
        // cout << "enter n" << " " << endl;
        cin >> n;
        string s;
        // cout<<"enter s"<<" "<<endl;
        cin>>s;
        string ans=find(s,n);
        cout<<ans<<" "<<endl;
    }
    return 0;
}