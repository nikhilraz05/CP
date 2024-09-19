#include <iostream>
#include <bits/stdc++.h>
using namespace std;
typedef long long int lli;
lli find(vector<lli> &v, lli n, lli f, lli a, lli b)
{
    lli prev = 0;
    lli sum = f;
    int i = 0;
    for (; i < n;)
    {
        // cout<<sum<<" "<<i<<" "<<endl;
        if (sum <= 0)
        {
            break;
        }
        lli curr = v[i];
        lli res = (curr - prev) * a;
        lli a1=1e18+7;
        if(sum<b)
        {
            a1=1e18+7;
        }
        else
        {
            a1=b;
        }
        lli mx=min(a1,res);
        if (sum - mx > 0)
        {
            sum = sum - mx;
            prev = curr;
            i++;
        }
        else
        {
            break;
        }
    }
    if (i >= n)
    {
        return 1;
    }
    return 0;
}
int main()
{
    int t;
    // cout << "Enter testcases" << " " << endl;
    cin >> t;
    while (t--)
    {
        lli n, f, a, b;
        cin >> n >> f >> a >> b;
        vector<lli> v;
        for (int i = 0; i < n; i++)
        {
            lli o;
            cin >> o;
            v.push_back(o);
        }
        lli ans = find(v, n, f, a, b);
        if(ans==0)
        {
            cout<<"NO"<<endl;
        }
        else
        {
            cout<<"YES"<<endl;
        }
    }
    return 0;
}