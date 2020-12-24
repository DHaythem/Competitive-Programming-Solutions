//https://atcoder.jp/contests/abc149/tasks/abc149_d

#include<bits/stdc++.h>
#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0); cout.precision(30);
using namespace std;
typedef long long ll;

int main()
{
    IOS;
    ll n,k,r,s,p,c=0;
    string t;
    cin>>n>>k>>r>>s>>p>>t;
    for(ll i=0;i<n;i++){
        if(i>=k && t[i]==t[i-k]) t[i]=0;
        if(t[i]=='s') c+=r;
        if(t[i]=='p') c+=s;
        if(t[i]=='r') c+=p;
    }
    cout<<c;
    return 0;
}
