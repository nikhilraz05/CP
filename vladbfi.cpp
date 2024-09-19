#include <iostream>
#include <bits/stdc++.h>
using namespace std;
typedef long long int lli;
char find(string &s,int n)
{
   int cnta=0,cntb=0;
   for(auto it:s)
   {
     if(it=='B')
     {
        cntb++;
     }
     else
     {
        cnta++;
     }
   }
   if(cntb>cnta)
   {
     return 'B';
   }
   return 'A';
}
int main()
{
    int t;
   //  cout << "Enter testcases";
    cin >> t;
    while (t--)
    {
        int n;
        string s;
      //   cout<<"enter string"<<" "<<endl;
        cin>>s;
        char ans=find(s,n);
        cout<<ans<<" "<<endl;
    }
    return 0;
}