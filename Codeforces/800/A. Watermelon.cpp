//https://codeforces.com/problemset/problem/4/A

#include<bits/stdc++.h>
#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0); cout.precision(30);
using namespace std;

int main()
{
    IOS;
    int n;
    cin>>n;
    if(n%2==0 && n!=2) cout<<"YES";
    else cout<<"NO";
    return 0;
}
