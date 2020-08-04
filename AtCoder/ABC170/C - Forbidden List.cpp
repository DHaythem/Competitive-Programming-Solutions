//https://atcoder.jp/contests/abc170/tasks/abc170_c

#include<bits/stdc++.h>
#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0); cout.precision(30);
#define ll long long
#define pi 3.14159265359
using namespace std;

int main()
{
    IOS;
    int x,n;
    cin>>x>>n;
    if(n==0) return cout<<x,0;
    int p[n];
    int t=0,ta,tb;
    for(int i=0;i<n;i++){
        cin>>p[i];
        if(p[i]==x) t=1;
    }
    if(t==0) return cout<<x,0;
    int a=x,b=x;
    while(true){
        a--;
        b++;
        ta=0;
        tb=0;
        for(int i=0;i<n;i++){
            if(p[i]==a) ta=1;
            if(p[i]==b) tb=1;
        }
        if(!ta) return cout<<a,0;
        if(!tb) return cout<<b,0;
    }
}
