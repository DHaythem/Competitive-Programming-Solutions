//https://codeforces.com/problemset/problem/1223/A

#include<bits/stdc++.h>
#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);   cout.precision(30);
using namespace std;

int main()
{
    IOS;

    int q,n;
    cin>>q;
    while(q--){
        cin>>n;
        if(n==2) cout<<2<<"\n";
        else cout<<n%2<<"\n";
    }
}
