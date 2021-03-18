//https://codeforces.com/problemset/problem/500/A

#include <bits/stdc++.h>
#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
using namespace std;

int main(){
	IOS;
    int n,t,x;
    cin>>n>>t;
    int a[n+1];
    for(int i=1;i<n;i++){
        cin>>x;
        a[i]=i+x;
    }
    x=1;
    while(x!=n){
        x=a[x];
        if(x==t){
            cout<<"YES";
            return 0;
        }
    }
    cout<<"NO";
    return 0;
}
