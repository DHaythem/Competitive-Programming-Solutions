//https://atcoder.jp/contests/abc180/tasks/abc180_c

#include<bits/stdc++.h>
#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0); cout.precision(30);
#define ll long long
#define ld long double
using namespace std;

int main()
{
    IOS;
    ll n;
    cin>>n;
    set<ll> s;
    for(ll i=1;i*i<=n;i++){
        if(n%i==0){
            s.insert(i);
            s.insert(n/i);
        }
    }
    for(auto i:s) cout<<i<<'\n';
    return 0;
}
