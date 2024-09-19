#include <iostream>
#include <bits/stdc++.h>
using namespace std;
typedef long long int lli;
int find(string&s,int n)
{
    int i=0,j=n-1;
    while(i<j)
    {
        if(s[i]!=s[j])
        {
            i++;
            j--;
        }
        else
        {
            break;
        }
    }
    if(i==j)
    {
        if(n%2!=0)
        {
            return 1;
        }
        else
        {
            return 0;
        }
    }
    return j-i+1;
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
        int ans=find(s,n);
        cout<<ans<<" "<<endl;
    }
    return 0;
}