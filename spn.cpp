#include<iostream>
#include<bits/stdc++.h>
using namespace std;
string find(int a,int b,int c)
{
   if(a<b && b<c)
   {
     return "STAIR";
   }
   if(b>a && b>c)
   {
     return  "PEAK";
   }
   return "NONE";
}
int main()
{
    // cout<<"enter testcases";
    int t;
    cin>>t;
    while(t--)
    {
    //    cout<<"enter numbers"<<" "<<endl;
       int a,b,c;
       cin>>a>>b>>c;
       string ans=find(a,b,c);
       cout<<ans<<" "<<endl;
    }
    return 0;
}