#include <iostream>
#include <bits/stdc++.h>
using namespace std;
typedef long long int lli;
int find(int a, int b, int c)
{
    int avg=((a+b)%2==0?(a+b)/2:((a+b)/2)+1);
    int diff=abs(avg-min(a,b));
    int ans=(diff%c==0?(diff/c):((diff/c)+1));
    return ans;

}
int main()
{
    int t;
    // cout << "Enter testcases" << " " << endl;
    cin >> t;
    while (t--)
    {
        int a, b, c;
        // cout << "ente a,b,c" << endl;
        cin >> a >> b >> c;
        int ans = find(a, b, c);
        cout << ans << " " << endl;
    }
    return 0;
}