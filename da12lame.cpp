#include <iostream>
#include <bits/stdc++.h>
using namespace std;
typedef long long int lli;
int find(int a,int b)
{
    int a1=abs(a);
    int b1=abs(b);
    if(a1==b1) return a1*2;
    int c=max(a1,b1);
    return c*2-1;
}
int main()
{
    int t;
    // cout << "Enter testcases" << " " << endl;
    cin >> t;
    while (t--)
    {
        int a,b;
        // cout<<"enter a,b"<<" "<<endl;
        cin>>a>>b;
        int ans = find(a,b);
        cout << ans << " " << endl;
    }
    return 0;
}