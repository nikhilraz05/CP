#include <iostream>
#include <bits/stdc++.h>
using namespace std;
typedef long long int lli;
pair<int,int> find(int n)
{
    int m = (n%4==0?n/4:(n/4)+1);
    int a = 0, b = 0;
    int sum = 0;
    for (int i = 0;;i++)
    {
        // cout<<a<<" "<<b<<" "<<n<<" "<<sum<<endl;
        if (n - (a+b) <= 4 * i + 1)
        {
            if (i % 2 == 0)
            {
                a += (n-(a+b));
                break;
            }
            else
            {
                b += (n-(a+b));
                break;
            }
        }
        if (i % 2 == 0)
        {
            a += (4 * i + 1);
        }
        else
        {
            b += (4 * i + 1);
        }
    }
    return {a,b};
}
int main()
{
    int t;
    // cout << "Enter testcases" << " " << endl;
    cin >> t;
    while (t--)
    {
        int n;
        // cout << "enter n" << " " << endl;
        cin >> n;
        pair<int, int> ans = find(n);
        cout << ans.first << " " << ans.second << " " << endl;
    }
    return 0;
}