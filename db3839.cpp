#include <iostream>
#include <bits/stdc++.h>
using namespace std;
typedef long long int lli;
int find(vector<vector<int>>& v)
{
    int a=v[0][0];
    int b=v[0][1];
    int c=v[1][0];
    int d=v[1][1];
    if(a<b && a<c && b<d && c<d) return 1;
    if(a>b && c>d && a<c && b<d) return 1;
    if(a>b && c>d && a>c && b>d) return 1;
    if(a<b && c<d && a>c && b>d) return 1;
    return 0;
}
int main()
{
    int t;
    // cout << "Enter testcases" << " " << endl;
    cin >> t;
    while (t--)
    {
        vector<vector<int>>v;
        // cout<<"enter values"<<" "<<endl;
        for(int i=0;i<2;i++)
        {
            vector<int>v1;
            for(int j=0;j<2;j++)
            {
                int a;
                cin>>a;
                v1.push_back(a);
            }
            v.push_back(v1);
        }
        int ans=find(v);
        if(ans==1)
        {
            cout<<"YES"<<" "<<endl;
        }
        else
        {
             cout<<"NO"<<" "<<endl;
        }
    }
    return 0;
}