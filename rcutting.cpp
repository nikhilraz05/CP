#include <iostream>
#include <bits/stdc++.h>
using namespace std;
typedef long long int lli;
int find(int a,int b)
{
    if(min(a,b)==1) return 0;
    
}
int main()
{
    int t;
    cout << "Enter testcases";
    cin >> t;
    while (t--)
    {
        int a,b;
        cout << "enter n" << " " << endl;
        cin >> a>>b;
        int ans=find(a,b);
        cout<<ans<<" "<<endl;
    }
    return 0;
}