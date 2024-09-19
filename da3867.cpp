#include <iostream>
#include <bits/stdc++.h>
using namespace std;
typedef long long int lli;
int find(vector<int> &v1, vector<int> &v2, int n, int t)
{
    int ans = -1;
    int res = -1;
    for (int i = 0; i < n; i++)
    {
        if (i == 0)
        {
            if (i + v1[i] <= t)
            {
                if(ans<v2[i])
                {
                    ans=v2[i];
                    res=i+1;
                }
            }
        }
        else
        {
            if (i + v1[i] <= t)
            {
                if(ans<v2[i])
                {
                    ans=v2[i];
                    res=i+1;
                }
            }
        }
    }
    return res;
}
int main()
{
    int q;
    // cout << "Enter testcases" << " " << endl;
    cin >> q;
    while (q--)
    {
        int n, t;
        // cout<<"enter n,t"<<" "<<endl;
        cin >> n >> t;
        // cout<<"enter values 1"<<" "<<endl;
        vector<int> v1;
        for (int i = 0; i < n; i++)
        {
            int a;
            cin >> a;
            v1.push_back(a);
        }
        // cout<<"enter values 2"<<" "<<endl;
        vector<int> v2;
        for (int i = 0; i < n; i++)
        {
            int a;
            cin >> a;
            v2.push_back(a);
        }
        int ans = find(v1, v2, n, t);
        cout << ans << " " << endl;
    }
    return 0;
}