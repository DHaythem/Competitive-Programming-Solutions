//https://codeforces.com/problemset/problem/327/A

#include <bits/stdc++.h>
#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
using namespace std;

int main()
{
    IOS;
    int n,c=0,m=INT_MIN,l,r;
    cin>>n;
    int a[n+1],dp[n+2];
    dp[0]=0;
    for(int i=1;i<n+1;i++){
        cin>>a[i];
        if(a[i]==0)
            a[i]=1;
        else{
            c++;
            a[i]=-1;
        }
        dp[i]=dp[i-1]+a[i];
    }
    dp[n+1]=dp[n];
    for(int i=0;i<n+1;i++){
        for(int j=i+1;j<n+2;j++)
        if(dp[j]-dp[i]>m){
            m=dp[j]-dp[i];
            l=i;
            r=j;
        }
    }
    for(int i=l+1;i<=r;i++){
        if(a[i]==1)
            c++;
        else
            c--;
    }
    cout<<c;
    return 0;
}
