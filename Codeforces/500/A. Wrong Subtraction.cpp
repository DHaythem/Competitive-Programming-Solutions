//https://codeforces.com/problemset/problem/977/A

#include<bits/stdc++.h>
#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);   cout.precision(30);
#define ll long long
#define pi 3.14159265359
using namespace std;

int main()
{
    IOS;
    int n, k;
    cin >> n >>k;
    while(k--){
        if(n%10 == 0)
            n/=10;
        else
            n--;
    }
    cout << n;
}
