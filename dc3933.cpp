#include <iostream>
#include <bits/stdc++.h>
using namespace std;
typedef long long int lli;
int find(string &s, int n)
{
    int ans = 0;
    int i = 0;
    for (; i < n; i++)
    {
        if (s[i] == 'e')
        {
            int j = i - 1;
            int cnt = 1;
            while (j >= 0)
            {
                if (cnt == 2 && s[j] == 'p')
                {
                    j--;
                    cnt++;
                    if(cnt==3)
                    {
                        s[i]='*';
                        ans++;
                    }
                    break;
                }
                else if (cnt == 1 && s[j] == 'i')
                {
                    j--;
                    cnt++;
                }
                else
                {
                    break;
                }
            }
        }
        if (s[i] == 'p')
        {
            int j = i - 1;
            int cnt = 1;
            while (j >= 0)
            {
                if (cnt == 2 && s[j] == 'm')
                {
                    j--;
                    cnt++;
                    if(cnt==3)
                    {
                        s[i]='*';
                        ans++;
                    }
                    break;
                }
                else if (cnt == 1 && s[j] == 'a')
                {
                    j--;
                    cnt++;
                }
                else
                {
                    break;
                }
            }
        }
    }
    cout<<s<<" "<<endl;
    return ans;
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
        string s;
        for (int i = 0; i < n; i++)
        {
            char a;
            cin >> a;
            s.push_back(a);
        }
        int ans = find(s, n);
        cout << ans << " " << endl;
    }
    return 0;
}