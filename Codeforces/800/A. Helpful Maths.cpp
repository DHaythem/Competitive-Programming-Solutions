//https://codeforces.com/problemset/problem/339/A

#include<bits/stdc++.h>
#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0); cout.precision(30);
using namespace std;

int main()
{
    IOS;
    string s,t="";
    cin>>s;
    for(int i=0;i<s.size();i+=2) t+=s[i];
    sort(t.begin(),t.end());
    for(int i=0;i<(t.size()-1);i++) cout<<t[i]<<"+";
    cout<<t[t.size()-1];
    return 0;
}
