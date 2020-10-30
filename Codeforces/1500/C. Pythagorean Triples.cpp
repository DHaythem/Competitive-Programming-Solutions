//https://codeforces.com/problemset/problem/707/C

#include<bits/stdc++.h>
#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0); cout.precision(30);
using namespace std;

int main()
{
    IOS;
    long long n,k;
    cin>>n;
    if(n==1 || n==2) cout<<-1;
    else if(n%2==0){
        k=n/2;
        cout<<k*k-1<<' '<<k*k+1;
    }
    else{
        k=n/2;
        cout<<2*k*k+2*k<<' '<<2*k*k+2*k+1;
    }
    return 0;
    }
