//https://codeforces.com/contest/1400/problem/A

#include<bits/stdc++.h>
#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0); cout.precision(30);
using namespace std;

int main()
{
    IOS;
    int t,n;
    string s;
    cin>>t;
    for(int i=0; i<t; i++){
        cin>>n>>s;
        cout<<string(n,s[n-1])<<'\n';
    }
    return 0;
}
