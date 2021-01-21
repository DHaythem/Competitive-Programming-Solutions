//https://codeforces.com/problemset/problem/1472/C

#include<bits/stdc++.h>
#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0); cout.precision(30);
#define max(a,b) (a>b? a : b)
using namespace std;

int main()
{
    IOS;
    int t,n,m,j;
    cin>>t;
    while(t--){
        m=0;
        cin>>n;
        int a[n+1],dp[n+1];
        for(int i=1;i<n+1;i++)
            cin>>a[i];
        for(int i=n;i>0;i--){
            dp[i]=a[i];
            j=i+a[i];
            if(j<=n)
                dp[i]+=dp[j];
            m=max(m,dp[i]);
        }
        cout<<m<<'\n';
    }
    return 0;
}
