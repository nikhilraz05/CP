#include <iostream>
#include <bits/stdc++.h>
using namespace std;
typedef long long int lli;
int find(string& s,int n)
{
   set<string>st;
   for(int i=0;i<n;)
   {
      string a;
      a+=s[i];
      if(i+1>=n)
      {
         break;
      }
      a+=s[i+1];
      st.insert(a);
      i++;
      a.clear();
   }
   return st.size();
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
        // cout<<"enter v"<<" "<<endl;
        cin>>s;
        int ans=find(s,n);
        cout<<ans<<" "<<endl;
    }
    return 0;
}