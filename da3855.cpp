#include <iostream>
#include <bits/stdc++.h>
using namespace std;
typedef long long int lli;
string find(string &s, int n)
{
    set<char> st;
    int cnt = 0;
    int i = 0;
    for (; i < n - 1; i++)
    {
        char c=s[i];
        if (c != 'm' && c != 'M' && c != 'e' && c != 'E' && c != 'o' && c != 'O' && c != 'w' && c != 'W') {
            return "NO";
        }
        if (st.size() > 0)
        {
            if (s[i] == 'm' || s[i] == 'M')
            {
                if (st.find('e') != st.end() || st.find('E') != st.end())
                {
                    return "NO";
                }
                if (st.find('o') != st.end() || st.find('O') != st.end())
                {
                    return "NO";
                }
                if (st.find('W') != st.end() || st.find('w') != st.end())
                {
                    return "NO";
                }
            }
            if (s[i] == 'e' || s[i] == 'E')
            {
                if (st.find('o') != st.end() || st.find('O') != st.end())
                {
                    return "NO";
                }
                if (st.find('W') != st.end() || st.find('w') != st.end())
                {
                    return "NO";
                }
            }
            if (s[i] == 'O' || s[i] == 'o')
            {
                if (st.find('W') != st.end() || st.find('w') != st.end())
                {
                    return "NO";
                }
            }
        }
        if(cnt==2 && (s[i]=='o' || s[i]=='O'))
        {
            cnt++;
        }
        if(cnt==1 && (s[i]=='e' || s[i]=='E'))
        {
            cnt++;
        }
        if(cnt==0 && (s[i]=='m' || s[i]=='M'))
        {
            cnt++;
        }
        st.insert(s[i]);
    }
    if (i == n - 1)
    {
        if (cnt == 3)
        {
            if (s[i] == 'w' || s[i] == 'W')
            {
                return "YES";
            }
            else
            {
                return "NO";
            }
        }
    }
    return "NO";
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
        string ans = find(s, n);
        cout << ans << endl;
    }
    return 0;
}