//https://codeforces.com/problemset/problem/69/A

#include<bits/stdc++.h>
#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0); cout.precision(30);
#define ll long long
#define pi 3.14159265359
using namespace std;

int main()
{
    IOS;

    int n, x=0, y=0, z=0, a=0;

    cin>>n;
    for (int i = 0; i<n; i++){
        cin>>a;
        x+=a;
        cin>>a;
        y+=a;
        cin>>a;
        z+=a;
    }

    if (x == 0 && y ==0 && z == 0) cout<<"YES";
    else cout<<"NO";

    return 0;
}
