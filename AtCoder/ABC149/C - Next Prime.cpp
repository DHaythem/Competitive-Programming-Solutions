//https://atcoder.jp/contests/abc149/tasks/abc149_c

#include<bits/stdc++.h>
#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0); cout.precision(30);
using namespace std;
typedef long long ll;

//Prime Number (n>1)
int prime(ll n)
{
    int flag=1;
    for(ll i=2;i<=n/2;i++){
        if(n%i==0){
            flag=0;
            break;
        }
    }
    return flag;
}


int main()
{
    IOS;
    ll x;
    cin>>x;
    while(1){
        if(prime(x)){
            cout<<x;
            break;
        }
        else x++;
    }
    return 0;
}
