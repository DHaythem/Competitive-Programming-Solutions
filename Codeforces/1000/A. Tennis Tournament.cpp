//https://codeforces.com/problemset/problem/628/A

#include<bits/stdc++.h>
#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0); cout.precision(30);
using namespace std;

int main()
{
    IOS;
    int n,b,p,x=0,y,k;
    cin>>n>>b>>p;
    y=p*n;
    while(1){
        k=n/2;
        x+=k+2*k*b;
        n=n-k;
        if(n==1) break;
    }
    cout<<x<<' '<<y;
    return 0;
    }
