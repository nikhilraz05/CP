#include <iostream>
#include <bits/stdc++.h>
using namespace std;
typedef long long int lli;
int find(int a,int b)
{
    if((a+b)%2==0) return 1;
    return 0;
}
int main()
{
    int t;
    // cout<<"Enter testcases";
    cin >> t;
    while (t--)
    {
        int a,b;
        // cout<<"enter a,b"<<" "<<endl;
        cin>>a>>b;
        int ans = find(a,b);
        string res;
        if(ans==1)
        {
            res="Bob";
            cout<<res<<" "<<endl;
        }
        else
        {
            res="Alice";
            cout<<res<<" "<<endl;
        }
    }
    return 0;
}