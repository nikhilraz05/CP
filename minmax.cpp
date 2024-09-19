#include<iostream>
#include<bits/stdc++.h>
using namespace std;
typedef long long int lli;
int find(vector<int>& v,int n)
{
   sort(v.begin(),v.end());
   int i=0;
   int j=n-2;
   int k=1;
   int l=n-1;
   int sum=0;
   sum+=(abs(v[i]-v[j])+abs(v[j]-v[k])+abs(v[k]-v[l])+abs(v[l]-v[i]));
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