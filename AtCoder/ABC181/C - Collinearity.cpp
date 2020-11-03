//https://atcoder.jp/contests/abc181/tasks/abc181_c

#include<bits/stdc++.h>
#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0); cout.precision(30);
#define ll long long
#define ld long double
using namespace std;

int main()
{
    IOS;
    ll n,s;
    cin>>n;
    ll x[n],y[n];
    for(int i=0;i<n;i++) cin>>x[i]>>y[i];
    for(int i=0;i<n-2;i++){
        for(int j=i+1;j<n-1;j++){
            for(int k=j+1;k<n;k++){
                s=x[i]*(y[j]-y[k])+x[j]*(y[k]-y[i])+x[k]*(y[i]-y[j]);
                if(s==0){
                    cout<<"Yes";
                    return 0;
                }
            }
        }
    }
    cout<<"No";
    return 0;
}
