//https://atcoder.jp/contests/abc180/tasks/abc180_b

#include<bits/stdc++.h>
#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0); cout.precision(30);
#define ll long long
#define ld long double
using namespace std;

int main()
{
    IOS;
    ll n,x,m=0,e=0,c=0;
    cin>>n;
    for(ll i=0;i<n;i++){
        cin>>x;
        x=abs(x);
        m+=x;
        e+=x*x;
        c=max(c,x);
    }
    cout<<m<<'\n'<<sqrt(e)<<'\n'<<c;
    return 0;
}
