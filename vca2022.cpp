#include <iostream>
#include <bits/stdc++.h>
using namespace std;
typedef long long int lli;
int find(int w, int d, int h, int a, int b, int f, int g)
{
    int xln=abs(0-a);
    int xrn=abs(w-a);
    int yln=abs(0-b);
    int yrn=abs(d-b);
    int xlm=abs(0-f);
    int xrm=abs(w-f);
    int ylm=abs(0-g);
    int yrm=abs(d-g);
    int x1=xln+xlm+h+abs(b-g);
    int x2=xrn+xrm+h+abs(b-g);
    int x3=yln+ylm+h+abs(a-f);
    int x4=yrn+yrm+h+abs(a-f);
    int mn=min({x1,x2,x3,x4});
    return mn;
}
int main()
{
    int t;
    // cout << "Enter testcases" << " " << endl;
    cin >> t;
    while (t--)
    {
        int w, d, h;
        cin >> w >> d >> h;
        int a, b, f, g;
        cin >> a >> b >> f >> g;
        int ans = find(w, d, h, a, b, f, g);
        cout << ans << " " << endl;
    }
    return 0;
}