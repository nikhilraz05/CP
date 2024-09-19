#include <iostream>
#include <bits/stdc++.h>
using namespace std;
typedef long long int lli;
int find(int b,int c,int h)
{
    int d=c+h;
    if(b>d)
    {
        return d*2+1;
    }
    else if(b<d)
    {
        return b*2-1;
    }
    else
    {
        return b*2-1;
    }
}
int main()
{
    int t;
    // cout << "Enter testcases" << " " << endl;
    cin >> t;
    while (t--)
    {
        int b,c,h;
        // cout << "ente b,c,h" << endl;
        cin >> b>>c>>h;
        int ans = find(b,c,h);
        cout << ans << " " << endl;
    }
    return 0;
}