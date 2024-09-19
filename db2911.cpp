#include <iostream>
#include <bits/stdc++.h>
using namespace std;
typedef long long int lli;
vector<int> find(int a,int b,int c)
{
    vector<int>v;
    int a1=((b+c)%2==0?1:0);
    v.push_back(a1);
    int b1=((a+c)%2==0?1:0);
    v.push_back(b1);
    int c1=((a+b)%2==0?1:0);
    v.push_back(c1);
    return v;
}
int main()
{
    int t;
    // cout << "Enter testcases" << " " << endl;
    cin >> t;
    while (t--)
    {
        int a,b,c;
        cin>>a>>b>>c;
        vector<int>ans = find(a,b,c);
        for(auto it:ans)
        {
            cout<<it<<" ";
        }
        cout<<endl;
    }
    return 0;
}