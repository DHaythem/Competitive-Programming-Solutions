//https://codeforces.com/problemset/problem/363/B

#include <bits/stdc++.h>
#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
using namespace std;

int main()
{
    IOS;
    int n,k,m,c;
    cin>>n>>k;
    int h[n+1];
    for(int i=1;i<=n;i++)
        cin>>h[i];
    int dp[n+1];
    dp[k]=0;
    for(int i=1;i<=k;i++)
        dp[k]+=h[i];
    m=dp[k];
    c=1;
    for(int i=k+1;i<=n;i++){
        dp[i]=dp[i-1]+h[i]-h[i-k];
        if(dp[i]<m){
            c=i-k+1;
            m=dp[i];
        }
    }
    cout<<c;
    return 0;
}
