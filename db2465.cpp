#include <iostream>
#include <bits/stdc++.h>
using namespace std;
typedef long long int lli;
int find(vector<char> &v)
{
    int n = v.size();
    int m1=n;
    if (n < 3)
        return 0;
    int cntx = 0, cnty = 0;
    int ans = 0;
    int region = 1;
    if (v[0] == 'U')
    {
        region = 1;
        cnty+=1;
    }
    else
    {
        region = 0;
        cntx+=1;
    }
    for (int i = 1; i < n; i++)
    {
        cntx=(v[i]=='R'?cntx+1:cntx);
        cnty=(v[i]=='U'?cnty+1:cnty);
        if(region==1)
        {
            if(cntx>cnty)
            {
                ans++;
                region=0;
            }
        }
        else
        {
            if(cnty>cntx)
            {
                ans++;
                region=1;
            }
        }

    }
    return ans;
}
int main()
{
    // int t;
    // // cout << "Enter testcases" << " " << endl;
    // cin >> t;
    // while (t--)
    // {
    int n;
    cin >> n;
    vector<char> v;
    for (int i = 0; i < n; i++)
    {
        char a;
        cin >> a;
        v.push_back(a);
    }
    int ans = find(v);
    cout << ans << endl;
    // }
    return 0;
}