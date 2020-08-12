//https://atcoder.jp/contests/abc168/tasks/abc168_b

#include<bits/stdc++.h>
#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0); cout.precision(30);
#define ll long long
#define pi 3.14159265359
using namespace std;

int main()
{
    IOS;
    int k;
    cin>>k;
    string s;
    cin>>s;
    if(s.size()<=k) cout<<s;
    else cout<<s.substr(0,k)<<"...";
    return 0;
}
