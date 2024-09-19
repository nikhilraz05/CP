#include <iostream>
#include <bits/stdc++.h>
using namespace std;
typedef long long int lli;
int find(vector<int>& v,int n)
{
   int sum=0;
   int cnt2=0,cnt1=0;
   for(auto it:v)
   {
     if(it%2==0)
     {
        cnt2++;
     }
     else
     {
        cnt1++;
     }
     sum+=it;
   }
   if(sum%3==0)
   {
     return 0;
   }
   if(sum%3==1 && cnt1>0)
   {
      return 1;
   }
   if(sum>0 && cnt2>0)
   {
      sum-=2;
      if(sum<=0) return 1; 
      if(sum%3==0)
      {
         return 1;
      }
      if(sum%3==2)
      {
        return 2;
      }
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
        vector<int>v;
        // cout<<"enter values"<<" "<<endl;
        for(int i=0;i<n;i++)
        {
            int a;
            cin>>a;
            int b=a%3;
            v.push_back(b);
        }
        int ans=find(v,n);
        cout<<ans<<" "<<endl;
    }
    return 0;
}