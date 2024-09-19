#include<iostream>
#include<bits/stdc++.h>
using namespace std;
string find(string& s)
{
    string s1;
    for(int i=0;i<2;i++)
    {
        s1+=s[i];
    }
    int a=stoi(s1);
     string ch;
    if(a>0 && a<12)
    {
        s+=" ";
        s+="AM";
        return s;
    }
    if(a==12)
    {
        s+=" ";
        s+="PM";
        return s;
    }
    if(a==0)
    {
       ch+="12";
       s+=" ";
       s+="AM";
    }
    if(a>12 && a<24)
    {
        a=a-12;
        if(a>9)
        {
            ch=to_string(a);
        }
        else
        {
            ch+="0";
            ch+=to_string(a);
        }
        s+=" ";
        s+="PM";
    }
    int j=0;
    while(j<2)
    {
        s[j]=ch[j];
        j++;
    }
   return s;
}
int main()
{
    // cout<<"enter testcases";
    int t;
    cin>>t;
    while(t--)
    {
    //    cout<<"enter string"<<" "<<endl;
       string s;
       cin>>s;
       string ans=find(s);
       cout<<ans<<" "<<endl;
    }
    return 0;
}