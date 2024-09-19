#include <iostream>
#include <bits/stdc++.h>
using namespace std;
typedef long long int lli;
vector<pair<int,vector<int>>> find(int n,int k,int x)
{
   if(k==1 && x==1) return ({0,{}});
   vector<int>v;
   for(int i=k;i>0;i--)
   {
      if(i!=x)
      {
        if(n%i==0)
        {
            int a=n/i;
            while(a>0)
            {
                v.push_back(i);
                a--;
            }
        }
        if(n%i!=x)
        {
            int a=n/i;
            int b=n%i;
            while(a>0)
            {
                v.push_back(i);
                a--;
            }
            v.push_back(b);
        }
      }
   }
}
int main()
{
    int t;
    cout << "Enter testcases" << " " << endl;
    cin >> t;
    while (t--)
    {
        int n,k,x;
        cout<<"enter n,k,x";
        cin>>n>>k>>x;
        vector<pair<int,vector<int>>>ans= find(n,k,x);
        if(ans[0].first==0)
        {
            cout<<"NO"<<" "<<endl;
        }
        else
        {
            cout<<"YES"<<" "<<endl;
            cout<<ans[1].second.size()<<" "<<endl;
            for(auto it:ans[1].second)
            {
                cout<<it<<" ";
            }
        }
    }
    return 0;
}