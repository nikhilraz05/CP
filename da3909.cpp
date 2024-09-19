#include <iostream>
#include <bits/stdc++.h>
using namespace std;
typedef long long int lli;
int find(int n)
{
   if((n-1)%3==0 || (n+1)%3==0)
   {
      return 0;
   }
   return 1;
}
int main()
{
    int t;
    // cout<<"Enter testcases"<<" "<<endl;
    cin >> t;
    while (t--)
    {
        int n;
        // cout<<"enter n"<<" "<<endl;
        cin>>n;
        int ans=find(n);
        if(ans==0)
        {
            cout<<"First"<<" "<<endl;
        }
        else
        {
            cout<<"Second"<<" "<<endl;
        }
    }
    return 0;
}