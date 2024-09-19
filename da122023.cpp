#include <iostream>
#include <bits/stdc++.h>
using namespace std;
typedef long long int lli;
pair<int,int>find(int n)
{
    if(n%2==1)
    {
        return {-1,0};
    }
    return {1,n/2};
}
int main()
{
    int t;
    // cout << "Enter testcases" << " " << endl;
    cin >> t;
    while (t--)
    {
        int n;
        cin>>n;
        pair<int,int>ans=find(n);
        if(ans.first==-1)
        {
            cout<<-1<<endl;
        }
        else
        {
            cout<<ans.first<<" "<<ans.second<<endl;
        }
    }
    return 0;
}