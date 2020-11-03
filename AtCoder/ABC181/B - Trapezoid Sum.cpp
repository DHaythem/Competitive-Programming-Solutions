//https://atcoder.jp/contests/abc181/tasks/abc181_b

#include<bits/stdc++.h>
#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0); cout.precision(30);
#define ll long long
#define ld long double
using namespace std;

int main()
{
    IOS;
    ll n,a,b,s=0;
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>a>>b;
        s+=(a+b)*(b-a+1)/2;
    }
    cout<<s;
    return 0;
}
