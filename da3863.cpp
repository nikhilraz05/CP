#include <iostream>
#include <bits/stdc++.h>
using namespace std;
typedef long long int lli;
string find(string& s, int n, int d)
{
   string ans;
   int i=0;
   for(;i<n;)
   {
     if(s[i]-'0'<d)
     {
        break;
     }
     ans+=s[i];
     i++;
   }
   ans+=(d+'0');
   for(int j=i;j<n;j++)
   {
    ans+=s[j];
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
        int n,d;
        // cout<<"enter n,d"<<" "<<endl;
        cin>>n>>d;
        string s;
        cin>>s;
        string ans=find(s,n,d);
        cout << ans << " " << endl;
    }
    return 0;
}