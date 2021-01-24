//https://codeforces.com/contest/1406/problem/B

#include <bits/stdc++.h>
#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
using namespace std;
#define max(a,b) (a>b? a : b)
typedef long long ll;

int main()
{
    IOS;
    ll t,n,m;
    cin>>t;
    while(t--){
        cin>>n;
        m=LLONG_MIN;
        ll a[n];
        for(ll i=0;i<n;i++)
            cin>>a[i];
        sort(a,a+n);
        ll dpd[n+1];
        dpd[0]=1;
        for(ll i=1;i<6;i++)
            dpd[i]=dpd[i-1]*a[n-i];
        reverse(a,a+n);
        ll dpr[n+1];
        dpr[0]=1;
        for(ll i=1;i<6;i++)
            dpr[i]=dpr[i-1]*a[n-i];
        for(ll i=0;i<6;i++)
            m=max(m,dpd[i]*dpr[5-i]);
        cout<<m<<'\n';
    }
    return 0;
}
