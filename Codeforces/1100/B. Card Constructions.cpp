//https://codeforces.com/problemset/problem/1345/B

#include<bits/stdc++.h>
#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0); cout.precision(30);
using namespace std;
typedef long long ll; //up to 10^18

const int N=26000;

int main()
{
    IOS;
    ll h[N];
    h[0]=1;
    int i=1;
    while((i*(3*i+1)/2)<1e9+1){
        h[i]=i*(3*i+1)/2;
        i++;
    }
    h[i+1]=h[i];
    int t,n,s;
    cin>>t;
    while(t--){
        cin>>n;
        s=0;
        while(n>1){
            int x=lower_bound(h,h+N,n)-h;
            if(h[x]!=n)
                x--;
            s++;
            n-=h[x];
        }
        cout<<s<<'\n';
    }
    return 0;
}
