//https://codeforces.com/problemset/problem/630/F

#include<bits/stdc++.h>
#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0); cout.precision(30);
using namespace std;

int main()
{
    IOS;
    long long a,b,c,n;
    cin>>n;
    a=n*(n-1)*(n-2)*(n-3)*(n-4)/120;
    b=a*(n-5)/6;
    c=b*(n-6)/7;
    cout<<a+b+c;
    return 0;
    }
