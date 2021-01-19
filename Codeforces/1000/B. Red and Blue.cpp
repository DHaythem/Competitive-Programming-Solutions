//https://codeforces.com/problemset/problem/1469/B

#include<bits/stdc++.h>
#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0); cout.precision(30);
#define max(a,b) (a>b? a : b)
using namespace std;


int r[100],b[100],memo[101][101];

int dp(int i,int j)
{
    if(i+j==0)
        return memo[i][j]=0;
    if(memo[i][j]!=INT_MIN)
        return memo[i][j];
    if(i==0)
        return memo[i][j]=b[j]+dp(i,j-1);
    if(j==0)
        return memo[i][j]=r[i]+dp(i-1,j);
    return memo[i][j]=max(r[i]+dp(i-1,j),b[j]+dp(i,j-1));

}

int main()
{
    //freopen("bar.in", "r", stdin);
    IOS;
    int t,n,m,mx;
    cin>>t;
    while(t--){
        cin>>n;
        for(int i=1;i<n+1;i++)
            cin>>r[i];
        cin>>m;
        for(int i=1;i<m+1;i++)
            cin>>b[i];
        for(int i=0;i<n+1;i++)
            for(int j=0;j<m+1;j++)
                memo[i][j]=INT_MIN;
        dp(n,m);
        mx=0;
        for(int i=0;i<n+1;i++)
            for(int j=0;j<m+1;j++)
                mx=max(mx,memo[i][j]);
        cout<<mx<<'\n';
    }
    return 0;
}
