//https://codeforces.com/problemset/problem/368/B

#include <bits/stdc++.h>
#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
using namespace std;

int main()
{
    IOS;
    int n,m,x;
    cin>>n>>m;
    int dp[n+2];
    int a[n+1];
    set<int> s;
    for(int i=1;i<=n;i++)
        cin>>a[i];
    dp[n+1]=0;
    for(int i=n;i>=1;i--){
        if(s.find(a[i])==s.end()){
            s.insert(a[i]);
            dp[i]=dp[i+1]+1;
        }
        else
            dp[i]=dp[i+1];
    }
    while(m--){
        cin>>x;
        cout<<dp[x]<<'\n';
    }
    return 0;
}
