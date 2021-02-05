//https://codeforces.com/problemset/problem/1475/B

#include <bits/stdc++.h>
#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
using namespace std;

int main()
{
    IOS;
    int t,n,x,y;
    cin>>t;
    while(t--){
        cin>>n;
        x=n/2020;
        y=n%2020;
        if(x>=y)
            cout<<"YES"<<'\n';
        else
            cout<<"NO"<<'\n';
    }
    return 0;
}
