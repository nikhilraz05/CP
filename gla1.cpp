#include <iostream>
#include <bits/stdc++.h>
using namespace std;
typedef long long int lli;
int find(vector<int> &v, int b, int k)
{
    int even = 0, odd = 0;
    for (int i = 0; i < k; i++)
    {
        int b1 = b;
        int a1 = v[i];
        if (i == k - 1)
        {
            if (a1 % 2 == 0)
            {
                even++;
            }
            else
            {
                odd++;
            }
        }
        else
        {
            if (b1 % 2 == 1 && a1 % 2 == 1)
            {
                odd++;
            }
            if (b1 % 2 == 0 || a1 % 2 == 0)
            {
                even++;
            }
        }
    }
    if (odd % 2 == 0)
        return 1;
    return 0;
}
int main()
{
    // int t;
    // // cout << "Enter testcases" << " " << endl;
    // cin >> t;
    // while (t--)
    // {
    int b, k;
    cin >> b >> k;
    vector<int> v;
    for (int i = 0; i < k; i++)
    {
        int a;
        cin >> a;
        v.push_back(a);
    }
    int ans = find(v, b, k);
    if(ans==1)
    {
        cout<<"even"<<endl;
    }
    else
    {
        cout<<"odd"<<endl;
    }
    // }
    return 0;
}