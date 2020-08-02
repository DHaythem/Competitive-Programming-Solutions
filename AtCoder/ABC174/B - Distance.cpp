//https://atcoder.jp/contests/abc174/tasks/abc174_b

#include<bits/stdc++.h>
#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0); cout.precision(30);
#define ll long long
#define pi 3.14159265359
using namespace std;

int main()
{
    IOS;
    ll n,d,x,y,s,c=0;
    cin>>n>>d;
    while(n--){
        cin>>x>>y;
        s=x*x+y*y;
        if(s<=d*d) c++;
    }
    cout<<c;
    return 0;
}
