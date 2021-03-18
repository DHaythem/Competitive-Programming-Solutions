//https://codeforces.com/problemset/problem/1020/B

#include <bits/stdc++.h>
#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
using namespace std;

int main(){
	IOS;
    int n,x;
    cin>>n;
    int a[n+1];
    for(int i=1;i<=n;i++)
        cin>>a[i];
    for(int i=1;i<=n;i++){
        int vis[n+1]={};
        x=i;
        vis[x]++;
        while(vis[x]<2){
            x=a[x];
            vis[x]++;
        }
        cout<<x<<' ';
    }
    return 0;
}
