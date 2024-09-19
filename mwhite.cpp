#include <iostream>
#include <bits/stdc++.h>
using namespace std;
typedef long long int lli;
int find(string &s,int n)
{
    int i=0,j=n-1;
    while(i<=j)
    {
        if(s[i]=='B')
        {
            break;
        }
        i++;
    }
    while(j>=0)
    {
        if(s[j]=='B')
        {
            return j-i+1;
        }
        j--;
    }
    return 0;
}
int main()
{
    int t;
    // cout << "Enter testcases";
    cin >> t;
    while (t--)
    {
        int n;
        // cout << "enter n" << " " << endl;
        cin >> n;
        string s;
        // cout<<"enter string"<<" "<<endl;
        cin>>s;
        int ans=find(s,n);
        cout<<ans<<" "<<endl;
    }
    return 0;
}