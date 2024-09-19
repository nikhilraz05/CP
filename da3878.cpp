#include <iostream>
#include <bits/stdc++.h>
using namespace std;
typedef long long int lli;
string find(string& s,int n)
{
    int i=0,j=1;
    string ans;
    for(;j<n;)
    {
        while(j<n && s[j]!=s[i])
        {
            j++;
        }
        if(j<n)
        {
            ans+=s[j];
        }
        j++;
        i=j;
        j++;
    }
    return ans;
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
        string s;
        // cout<<"enter s"<<" "<<endl;
        cin>>s;
        string ans=find(s,n);
        cout<<ans<<" "<<endl;
    }
    return 0;
}