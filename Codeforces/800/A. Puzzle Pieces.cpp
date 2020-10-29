//https://codeforces.com/problemset/problem/1345/A

#include<bits/stdc++.h>
#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0); cout.precision(30);
using namespace std;

int main()
{
    IOS;
    int t,n,m;
    cin>>t;
    for(int i=0;i<t;i++){
        cin>>n>>m;
        if(n==1 || m==1 || n==2 && m==2) cout<<"YES"<<'\n';
        else cout<<"NO"<<'\n';
    }
    return 0;
}
