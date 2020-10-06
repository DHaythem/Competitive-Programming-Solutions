//https://codeforces.com/problemset/problem/1328/A

#include<bits/stdc++.h>
#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0); cout.precision(30);
using namespace std;

int main()
{
    IOS;
    int t,a,b;
    cin>>t;
    for(int i=0; i<t; i++){
        cin>>a>>b;
        if(a%b==0) cout<<0<<'\n';
        else cout<<b-a%b<<'\n';
    }
    return 0;
}
