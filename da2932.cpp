#include <iostream>
#include <bits/stdc++.h>
using namespace std;
typedef long long int lli;
string find(string& s,int n)
{
    int i=0,j=s.size()-1;
    int cnt=0;
    while(i<=j)
    {
        if(s[i]<=s[j])
        {
            i++;
            j--;
            cnt++;
        }
        else
        {
            break;
        }
    }
    if(cnt>0)
    {
        return s;
    }
    string s1=s;
    reverse(s1.begin(),s1.end());
    return s1+s;
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