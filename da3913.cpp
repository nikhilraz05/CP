#include <iostream>
#include <bits/stdc++.h>
using namespace std;
typedef long long int lli;
vector<string> find(string& s)
{
    char a=s[0];
    char b=s[1];
    string res;
    res+=b;
    vector<string>ans;
    for(char ch='a';ch<='h';ch++)
    {
        if(ch==a)
        {
            continue;
        }
        res+=ch;
        reverse(res.begin(),res.end());
        ans.push_back(res);
        reverse(res.begin(),res.end());
        res.pop_back();
    }
     res="";
    res+=a;
    for(int i=1;i<=8;i++)
    {
         if(i==b-'0')
         {
            continue;
         }
         char c=i+'0';
          res+=c;
          ans.push_back(res);
          res.pop_back();
    }
   return ans;    
}
int main()
{
    int t;
    // cout<<"Enter testcases";
    cin >> t;
    while (t--)
    {
        string s;
        // cout<<"enter s"<<" "<<endl;
        cin>>s;
        vector<string>ans=find(s);
        for(auto it:ans)
        {
            cout<<it<<" "<<endl;
        }
    }
    return 0;
}