#include <iostream>
#include <bits/stdc++.h>
using namespace std;
typedef long long int lli;
string find(string& s,int n)
{
    int i=0,j=n-1;
    int cnt=0;
    int prev=0;
    if(s[i]==s[j])
    {
        prev=1;
    }
    else
    {
        prev=0;
        cnt++;
    }
    i++;
    j--;
    while(i<j)
    {
        if(s[i]==s[j])
        {
            prev=1;
        }
        else
        {
            if(prev==1)
            {
                cnt++;
            }
            prev=0;
        }
        i++;
        j--;
    }
    if(cnt>=2) return "NO";
    return "YES";
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
        string s;
        cin>>s;
        string ans=find(s,n);
        cout << ans << " " << endl;
    }
    return 0;
}