#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int find(vector<int>& v,int n)
{
   map<int,int>mp;
   for(auto it:v)
   {
    mp[it]++;
   }
   int ans=0;
   for(auto it:mp)
   {
     if(it.second%2==0) ans++;
   }
   return ans;
}
int main()
{
    // cout<<"enter testcases";
    int t;
    cin>>t;
    while(t--)
    {
       int n;
    //    cout<<"enter size of array"<<" "<<endl;
       cin>>n;
       vector<int>v;
       for(int i=0;i<n;i++)
       {
         int a;
        //  cout<<"enter value"<<" "<<endl;
         cin>>a;
         v.push_back(a);
       }
       int ans=find(v,n);
       cout<<ans<<" "<<endl;
    }
    return 0;
}