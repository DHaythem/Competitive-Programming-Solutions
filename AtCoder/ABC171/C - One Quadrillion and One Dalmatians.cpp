//https://atcoder.jp/contests/abc171/tasks/abc171_c

#include<bits/stdc++.h>
#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0); cout.precision(30);
#define ll long long
#define pi 3.14159265359
using namespace std;

int main()
{
    IOS;
    ll n;
    cin>>n;
    string s;
    while(n--){
        s=char(97+n%26)+s;
        n/=26;
    }
    cout<<s;
    return 0;
}
