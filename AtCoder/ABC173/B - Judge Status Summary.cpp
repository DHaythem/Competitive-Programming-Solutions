//https://atcoder.jp/contests/abc173/tasks/abc173_b

#include<bits/stdc++.h>
#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0); cout.precision(30);
#define ll long long
#define pi 3.14159265359
using namespace std;

int main()
{
    IOS;

    int n;
    cin>>n;
    map<string, int> m;
    while(n--){
        string s;
        cin>>s;
        m[s]++;
    }
    for(auto s : {"AC","WA","TLE","RE"}) cout<<s<<" x "<<m[s]<<'\n';

    return 0;
}
