//https://atcoder.jp/contests/abc173/tasks/abc173_a

#include<bits/stdc++.h>
#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0); cout.precision(30);
#define ll long long
#define pi 3.14159265359
using namespace std;

int main()
{
    IOS;
    int n,a;
    cin>>n;
    if (n%1000!=0) a=n/1000+1;
    else a = n/1000;
    cout<<a*1000-n;
    return 0;
}
