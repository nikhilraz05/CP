#include<iostream>
#include<bits/stdc++.h>
using namespace std;
typedef long long int lli;
int find(vector<int>& v,int n)
{
   int sum=0;
   for(auto it:v)
   {
    sum+=abs(it);
   }
   return sum;
}
int main()
{
    int t;
    // cout<<"Enter testcases";
    cin>>t;
    while(t--)
    {
       int n;
       vector<int>v;
    //    cout<<"enter n"<<" "<<endl;
       cin>>n;
    //    cout<<"enter value"<<" "<<endl;
       for(int i=0;i<n;i++)
       {
         int a;
         cin>>a;
         v.push_back(a);
       }
       int ans=find(v,n);
       cout<<ans<<" "<<endl;
    }
    return 0;
}