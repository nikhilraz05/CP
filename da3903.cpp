#include <iostream>
#include <bits/stdc++.h>
using namespace std;
typedef long long int lli;
int find(string &s1, string &s2, int n, int m)
{
    int i = 0, j = 0;
    int cnt = 0;
    if(n==1 && m==1)
    {
        if(s1[0]!=s2[0])
        {
            return -1;
        }
        else
        {
            return 0;
        }
    }
    bool valid=0;
    for (; j < m && i<n;)
    {
        if (i<n && j<m && s1[i] == s2[j])
        {
            while (i < n && j < m && s1[i] == s2[j])
            {
                i++;
                j++;
                
                if (j >= m)
                {
                    valid=1;
                    break;
                }
                if (i >= n && j<m)
                {
                    i = 0;
                    cnt++;
                }
                if (cnt > 0)
                {
                    if (j < m && i < n)
                    {
                        if (s1[i] != s2[j])
                        {
                            return -1;
                        }
                    }
                }
            }
            if (j >= m)
            {
                break;
            }
            j = 0;
        }
        else
        {
            // if(i==n-1 && j==0)
            // {
            //     if(s1[i]!=s2[j])
            //     {
            //         return -1;
            //     }
            // }
            i++;
        }
        if (j >= m)
        {
            break;
        }
    }
    if(cnt==0 && valid==0) return -1;
    if(cnt==0 && valid==1) return 0;
    int res=log2(cnt);
    return res+1;
}
int main()
{
    int t;
    // cout << "Enter testcases" << " " << endl;
    cin >> t;
    while (t--)
    {
        int n, m;
        cin >> n >> m;
        string s1, s2;
        for (int i = 0; i < n; i++)
        {
            char a;
            cin >> a;
            s1.push_back(a);
        }
        for (int i = 0; i < m; i++)
        {
            char a;
            cin >> a;
            s2.push_back(a);
        }
        int ans = find(s1, s2, n, m);
        cout << ans << " " << endl;
    }
    return 0;
}