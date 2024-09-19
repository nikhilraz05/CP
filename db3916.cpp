#include <iostream>
#include <bits/stdc++.h>
using namespace std;
typedef long long int lli;

vector<int> find(int n,int k)
{
    vector<int> v;
    for(int i=n;i>0;i--)
    {
        v.push_back(i);
    }
    int m=v.size();
    int i=m-1,j=m-1-k;
    while(i>=j)
    {
        // cout<<v[i]<<" "<<v[j]<<" "<<endl;
        swap(v[i],v[j]);
        i--;
        j++;
    }
    // for(auto it:v)
    // {
    //     cout<<it<<" "<<endl;
    // }
    return v;
}
int main()
{
    int t;
    // cout << "Enter testcases" << " " << endl;
    cin >> t;
    while (t--)
    {
        int n,k;
        cin>>n>>k;
        vector<int>ans=find(n,k);
        for(auto it:ans)
        {
            cout<<it<<" ";
        }
        cout<<endl;
    }
    return 0;
}