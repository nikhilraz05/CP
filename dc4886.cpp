#include <iostream>
#include <bits/stdc++.h>
using namespace std;
typedef long long int lli;
string find(vector<vector<char>>& v)
{
    string s;
    for(int i=0;i<8;i++)
    {
        for(int j=0;j<8;j++)
        {
            if(v[i][j]!='.')
            {
                s+=v[i][j];
            }
        }
    }
    return s;
}
int main()
{
    int t;
    // cout << "Enter testcases" << " " << endl;
    cin >> t;
    while (t--)
    {
        vector<vector<char>>v;
        for(int i=0;i<8;i++)
        {
            vector<char>v1;
            for(int j=0;j<8;j++)
            {
                char a;
                cin>>a;
                v1.push_back(a);
            }
            v.push_back(v1);
            cout<<endl;
        }
        string ans=find(v);
        cout<<ans<<" "<<endl;
    }
    return 0;
}