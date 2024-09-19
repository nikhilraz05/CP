#include <iostream>
#include <bits/stdc++.h>
using namespace std;
typedef long long int lli;
string find(int a,int b,int c)
{
    int d=(c%2==0?c/2:(c/2)+1);
    a=a+d;
    b=b+abs(c-d);
    if(a<=b) return "Second";
    return "First"; 
}
int main()
{
    int t;
    // cout << "Enter testcases" << " " << endl;
    cin >> t;
    while (t--)
    {
        int a,b,c;
        // cout<<"enter a,b,c"<<" "<<endl;
        cin>>a>>b>>c;
        string ans=find(a,b,c);
        cout<<ans<<" "<<endl;
    }
    return 0;
}