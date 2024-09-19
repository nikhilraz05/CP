#include <iostream>
#include <bits/stdc++.h>
using namespace std;
typedef long long int lli;
string find(string& s)
{
    vector<int>freq(128,0);
    for(auto it:s)
    {
        freq[it]++;
    }
    int cnt1=0,cnt11=0,cnt2=0;
    for(int i=0;i<freq.size();i++)
    {
        if(freq[i]>0 && freq[i]%2==0)
        {
            cnt2++;
        }
        if(freq[i]==1)
        {
            cnt1++;
        }
        if(freq[i]>1 && freq[i]%2==1)
        {
            cnt11++;
        }
    }
    if(cnt2==1 && cnt1==1) return "NO";
    if(cnt2==1 && cnt11==1) return "YES";
    if(cnt2>1 && cnt1==1 ) return "YES";
    if(cnt2>1 && cnt11==1) return "YES";
    return "NO";

}
int main()
{
    int t;
    // cout << "Enter testcases" << " " << endl;
    cin >> t;
    while (t--)
    {
        string s;
        // cout<<"enter s"<<" "<<endl;
        cin>>s;
        string ans=find(s);
        cout<<ans<<" "<<endl;
    }
    return 0;
}