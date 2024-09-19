#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int find(vector<int>& v,int n)
{
    int cnt=0;
    sort(v.begin(),v.end());
    int a=(n%2==0?n/2:(n+1)/2);
    int value=v[a]+1;
    cnt=1;
    int j=a+1;
    cout<<a<<" "<<j<<" "<<endl;
    if(j>n) return cnt;
    for(;j<=n;j++)
    {
        if(value>v[j])
        {
            cnt++;
        }
    }
    cout<<cnt<<" "<<n<<" "<<a<<" "<<value<<" "<<endl;
    return cnt;
}
int main()
{
    cout<<"enter testcases";
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cout<<"enter size of array"<<" "<<endl;
        cin>>n;
        vector<int>v;
       cout<<"enter numbers"<<" "<<endl;
       for(int i=1;i<=n;i++)
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