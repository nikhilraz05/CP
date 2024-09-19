#include <iostream>
#include <bits/stdc++.h>
using namespace std;
typedef long long int lli;
string find(vector<int>& v)
{
    vector<int>v1=v;
   sort(v1.begin(),v1.end());
   for(int i=0;i<v.size();i++)
   {
     if(v[i]%2 != v1[i]%2)
     {
        return "NO";
     }
   }
   return "YES";

}
int main()
{
    int t;
    // cout << "Enter testcases" << " " << endl;
    cin >> t;
    while (t--)
    {
        int n ;
        // cout << "ente n" << endl;
        cin >> n ;
        // cout<<"enter values"<<endl;
        vector<int>v;
        for(int i=0;i<n;i++)
        {
            int b;
            cin>>b;
            v.push_back(b);
        }
        string ans = find(v);
        cout << ans << " " << endl;
    }
    return 0;
}