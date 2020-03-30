//https://codeforces.com/problemset/problem/1186/A

#include<bits/stdc++.h>
#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);   cout.precision(30);
#define ll long long
#define pi 3.14159265359
using namespace std;

int main()
{
    IOS;
    int n, m, k;
    cin >> n >> m >> k;
    if(n<=m && n<=k)
        cout << "Yes";
    else
        cout << "No";
}
