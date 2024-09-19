#include <iostream>
#include <bits/stdc++.h>
using namespace std;
typedef long long int lli;
int find(vector<int> &v, int n)
{
    int sum = 0;
    for (auto it : v)
    {
        sum += it;
    }
    int avg = sum / n;
    int i = 0, j = n - 1, k = 0;
    while (i <= j)
    {
        if (avg < v[j])
        {
            return 0;
        }
        if (avg == v[j])
        {
            j--;
        }
        if (avg > v[j])
        {
            while (i <= j && avg != v[j] && v[i] >= avg)
            {
                int a = v[i] - avg;
                v[i] = avg;
                v[j] = avg;
                j--;
                i += 1;
                if (i <= j)
                {
                    v[i] += a;
                }
                // cout << i << " " << j << " " << " " << v[j] << " " << v[i] << " " << endl;
            }
        }
    }
    return 1;
}
int main()
{
    int t;
    // cout<<"Enter testcases";
    cin >> t;
    while (t--)
    {
        int n;
        vector<int> v;
        //    cout<<"enter n"<<" "<<endl;
        cin >> n;
        //    cout<<"enter value"<<" "<<endl;
        for (int i = 0; i < n; i++)
        {
            int a;
            cin >> a;
            v.push_back(a);
        }
        int ans = find(v, n);
        if (ans == 1)
        {
            cout << "YES" << " " << endl;
        }
        else
        {
            cout << "NO" << " " << endl;
        }
    }
    return 0;
}