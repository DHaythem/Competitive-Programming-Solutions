//https://atcoder.jp/contests/abc149/tasks/abc149_b

#include<bits/stdc++.h>
#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0); cout.precision(30);
using namespace std;
typedef long long ll;
#define pi 3.14159265

int main()
{
    //freopen("circle.in", "r", stdin);
    IOS;
    ll a,b,k;
    cin>>a>>b>>k;
    if(a>=k) cout<<a-k<<' '<<b;
    else cout<<0<<' '<<max(0ll,b-(k-a));
    return 0;
}
