#include <iostream>
#include <bits/stdc++.h>
using namespace std;
typedef long long int lli;
pair<int, string> find(int x)
{
    if (x == 1)
    {
        return {0, {}};
    }
    if(x%2==1)
    {
        return {0,{}};
    }
    string ans;
    int cnt=0;
    for(char ch='A';ch<='Z';ch++)
    {
        if(cnt>=x)
        {
            break;
        }
        ans+=ch;
        ans+=ch;
        cnt+=2;
    }
    return {1,{ans}};
}
int main()
{
    int t;
    // cout << "Enter testcases" << " " << endl;
    cin >> t;
    while (t--)
    {
        int x;
        cin >> x;
        pair<int, string> ans = find(x);
        if (ans.first == 1)
        {
            cout <<"YES"<< " " << endl;
            cout << ans.second << " " << endl;
        }
        else
        {
            cout<<"NO"<<" "<<endl;
        }
    }
    return 0;
}