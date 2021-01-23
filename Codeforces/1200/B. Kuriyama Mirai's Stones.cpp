//https://codeforces.com/problemset/problem/433/B

#include<bits/stdc++.h>
#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0); cout.precision(30);
using namespace std;
typedef long long ll;

int main()
{
    IOS;
    ll n,m,t,l,r;
    cin>>n;
    ll a[n+1],dp1[n+1],dp2[n+1];
    a[0]=0;dp1[0]=0;dp2[0]=0;
    for(ll i=1;i<n+1;i++){
        cin>>a[i];
        dp1[i]=a[i]+dp1[i-1];
    }
    sort(a,a+n+1);
    for(ll i=1;i<n+1;i++)
        dp2[i]=a[i]+dp2[i-1];
    cin>>m;
    while(m--){
        cin>>t>>l>>r;
        if(t==1)
            cout<<dp1[r]-dp1[l-1]<<'\n';
        else
            cout<<dp2[r]-dp2[l-1]<<'\n';
    }
    return 0;
}
