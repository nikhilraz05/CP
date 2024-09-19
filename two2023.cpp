#include <iostream>
#include <bits/stdc++.h>
using namespace std;
typedef long long int lli;
pair<string,vector<int>> find(vector<int>& v,int n,int k)
{
    int prod=1;
    for(int i=0;i<n;i++)
    {
        if(prod>2023)
        {
            return {"NO",{0}};
        }
        prod=prod*v[i];
    }
    set<int>s={2023,17,7,1};
    vector<int>ans;
    int a=2023;
    while(a>0 && k>0)
    {
        if(a%prod==0 && k>0)
        {
           int b=a/prod;
           if(s.find(b)!=s.end())
           {
              ans.push_back()
           }
        }
        else
        {
            break;
        }
    }
    if(a==0 && k==0)
    {
        return {"Yes",{ans}};
    }
    return {"NO",{}};
}
int main()
{
    int t;
    cout<<"Enter testcases";
    cin >> t;
    while (t--)
    {
        int n,k;
        cout<<"enter n,k"<<" "<<endl;
        cin>>n>>k;
        vector<int>v;
        cout<<"enter values"<<" "<<endl;
        for(int i=0;i<n;i++)
        {
            int a;
            cin>>a;
            v.push_back(a);
        }
        pair<string,vector<int>>p=find(v,n,k);
        if(p.first=="Yes")
        {
            cout<<p.first<<" "<<endl;
            for(int i=0;i<p.second.size();i++)
            {
                cout<<p.second[i]<<" ";
            }
        }
        else
        {
            cout<<p.first<<" "<<endl;
        }
    }
    return 0;
}