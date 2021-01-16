//https://codeforces.com/problemset/problem/1472/B

#include <bits/stdc++.h>
#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
using namespace std;

int main()
{
	IOS;
    int t,n,a,u,d;
    cin>>t;
    while(t--){
        cin>>n;
        u=d=0;;
        while(n--){
            cin>>a;
            if(a==1) u++;
            else d++;
        }
        if(u%2==0 && u!=0 || u==0 && d%2==0) cout<<"YES"<<'\n';
        else cout<<"NO"<<'\n';
    }
    return 0;
}
