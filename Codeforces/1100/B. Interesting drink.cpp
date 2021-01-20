//https://codeforces.com/problemset/problem/706/B

#include <bits/stdc++.h>
#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
using namespace std;

int main()
{
	IOS;
    int n,m;
    cin>>n;
    int a[n];
    map<int,int> d;
    for(int i=0;i<n;i++)
        cin>>a[i];
    sort(a,a+n);
    for(int i=1;i<=a[n-1];i++)
        d[i]=0;
    for(int i=0;i<n;i++)
        d[a[i]]++;
    int dp[a[n-1]+1];
    dp[0]=0;
    for(int i=1;i<=a[n-1];i++)
        dp[i]=dp[i-1]+d[i];
    int q;
    cin>>q;
    while(q--){
        cin>>m;
        if(m>=a[n-1])
            cout<<dp[a[n-1]]<<'\n';
        else
            cout<<dp[m]<<'\n';
    }
    return 0;
}
