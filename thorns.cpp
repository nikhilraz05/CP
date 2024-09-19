#include<iostream>
#include<bits/stdc++.h>
using namespace std;
typedef long long int lli;
int find(vector<char>& v,int n)
{
   int sum=0;
   for(int i=0;i<n;i++)
   {
     if(i+1<n && v[i]=='*' && v[i+1]=='*')
     {
        return sum;
     }
     if(v[i]=='@')
     {
        sum+=1;
     }
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
       vector<char>v;
    //    cout<<"enter n"<<" "<<endl;
       cin>>n;
    //    cout<<"enter value"<<" "<<endl;
       for(int i=0;i<n;i++)
       {
         char a;
         cin>>a;
         v.push_back(a);
       }
       int ans=find(v,n);
       cout<<ans<<" "<<endl;
    }
    return 0;
}