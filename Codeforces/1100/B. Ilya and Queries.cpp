//https://codeforces.com/problemset/problem/313/B

#include <bits/stdc++.h>
#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
using namespace std;

int main()
{
    IOS;
    string s;
    cin>>s;
    int n,q,l,r;
    n=s.size();
    int dp[n+1];
    dp[0]=0;
    dp[1]=0;
    for(int i=2;i<n+1;i++){
        if(s[i-2]==s[i-1])
            dp[i]=dp[i-1]+1;
        else
            dp[i]=dp[i-1];
    }
    cin>>q;
    while(q--){
        cin>>l>>r;
        cout<<dp[r]-dp[l]<<'\n';
    }
    return 0;
}
