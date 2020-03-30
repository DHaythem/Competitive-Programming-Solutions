//https://codeforces.com/problemset/problem/935/A

#include<bits/stdc++.h>
#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);   cout.precision(30);
using namespace std;

int main()
{
    IOS;
    int n, c = 0;
    cin >> n;
    for(int i = 1; i<=n/2; i++){
        if(n%i == 0)
            c++;
    }
    cout << c;
}
