#include <iostream>
#include <bits/stdc++.h>
using namespace std;
typedef long long int lli;
// class cmp
// {
// public:
//     bool operator()(const pair<int, int> &a, const pair<int, int> &b)
//     {
//         bool aodd = a.first % 2 == 1;
//         bool bodd = b.first % 2 == 1;
//         if (aodd && !bodd)
//         {
//             return true;
//         }
//         if (!aodd && bodd)
//         {
//             return false;
//         }
//         if (aodd)
//         {
//             return a.first < b.first;
//         }
//         else
//         {
//             return a.first > b.first;
//         }
//     }
// };
pair<int, vector<int>> find(vector<int> &v, int n)
{
    // vector<pair<int, int>> v1;
    // for (int i = 0; i < n; i++)
    // {
    //     v1.push_back({v[i], i + 1});
    // }
    // // sort(v1.begin(), v1.end(), cmp());
    // int i = 0;
    // int j = 0;
    // for (; j < n; j++)
    // {
    //     if (v1[j].first % 2 == 0)
    //     {
    //         break;
    //     }
    // }
    // vector<int> res;
    // if (j - i + 1 > 3)
    // {
    //     for (int k = 0; k < 3; k++)
    //     {
    //         res.push_back(v1[k].second);
    //     }
    //     return {1, {res}};
    // }
    // if (i == j)
    // {
    //     return {0, {}};
    // }
    // if (j - i + 1 == n && j == n - 1)
    // {
    //     return {0, {}};
    // }
    // res.push_back(v1[i].second);
    // for (int k = j;; k++)
    // {
    //     if (res.size() == 3)
    //     {
    //         return {1, {res}};
    //     }
    //     res.push_back(v1[k].second);
    // }
    // return {0, {}};
    set<pair<int, int>> st1, st2;
    for (int i = 0; i < n; i++)
    {
        if (v[i] % 2 == 0)
        {
            st2.insert({i + 1, v[i]});
        }
        else
        {
            st1.insert({i + 1, v[i]});
        }
    }
    vector<int> res;
    if (st2.size() >= 2)
    {
        if(st1.size()>=1)
        {
            auto it=st1.begin();
            res.push_back(it->first);
            st1.erase(it);
        }
        while (st2.size()>=0)
        {
            if(res.size()==3)
            {
                return {1,{res}};
            }
            if(st2.size()==0)
            {
                break;
            }
            auto it = st2.begin();
            res.push_back(it->first);
            st2.erase(it);
        }
    }
    if (st1.size() >= 3)
    {
        while (st1.size()>=0)
        {
            if (res.size() == 3)
            {
                return {1, {res}};
            }
            if(st1.size()==0)
            {
                break;
            }
            auto it = st1.begin();
            res.push_back(it->first);
            st1.erase(it);
        }
    }
    return {0, {}};
}
int main()
{
    int t;
    // cout << "Enter testcases" << " " << endl;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        vector<int> v;
        for (int i = 0; i < n; i++)
        {
            int a;
            cin >> a;
            v.push_back(a);
        }
        pair<int, vector<int>> ans = find(v, n);
        if (ans.first == 0)
        {
            cout << "NO" << " " << endl;
        }
        else
        {
            cout << "YES" << " " << endl;
            for (auto it : ans.second)
            {
                cout << it << " ";
            }
        }
        cout << endl;
    }
    return 0;
}