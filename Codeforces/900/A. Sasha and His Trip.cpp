//https://codeforces.com/problemset/problem/1113/A

#include <bits/stdc++.h>
#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
using namespace std;

int main()
{
	IOS;
    int n,v;
    cin>>n>>v;
    if(v>=n-1)
        cout<<n-1;
    else
        cout<<(n-v-1)*(n-v+2)/2+v;
    return 0;
}
