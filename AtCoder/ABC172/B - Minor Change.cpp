//https://atcoder.jp/contests/abc172/tasks/abc172_b

#include<bits/stdc++.h>
#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0); cout.precision(30);
#define ll long long
#define pi 3.14159265359
using namespace std;

int main()
{
    IOS;
    string s,t;
    cin>>s>>t;
    int c=0;
    for(int i=0;i<s.size();i++){
        if (s[i]!=t[i])
        c++;
    }
    cout<<c;
    return 0;
}
