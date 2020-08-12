//https://atcoder.jp/contests/abc168/tasks/abc168_a

#include<bits/stdc++.h>
#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0); cout.precision(30);
#define ll long long
#define pi 3.14159265359
using namespace std;

int main()
{
    IOS;
    int n;
    cin>>n;
    n%=10;
    if(n==3) cout<<"bon";
    else if (n==0 || n==1 || n==6 || n==8) cout<<"pon";
    else cout<<"hon";
    return 0;
}

// cout<<"pphbhhphph"[n%10]<<"on";
