//https://codeforces.com/contest/996/problem/A

#include<bits/stdc++.h>
#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);   cout.precision(30);
using namespace std;

int main()
{
    IOS;
    int n, c = 0;
    cin >> n;
    c+=n/100;
    n%=100;
    c+=n/20;
    n%=20;
    c+=n/10;
    n%=10;
    c+=n/5;
    n%=5;
    c+=n;
    cout << c;
}
