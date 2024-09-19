#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int find(int n, int m)
{
    if(n >= m && m%2==n%2)
    {
        return 1;
    }
    return 0;
}

int main()
{
    // cout << "Enter test cases: ";
    int t;
    cin >> t;

    while(t--)
    {
       int m, n;
    //    cout << "Enter numbers: ";
       cin >> n >> m;
       
       int a = find(n, m);
       if(a == 0)
       {
           cout << "No" << endl;
       }
       else
       {
           cout << "Yes" << endl;
       }
    }
    return 0;
}
