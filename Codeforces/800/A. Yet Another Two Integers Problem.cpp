//https://codeforces.com/contest/1409/problem/A

#include<bits/stdc++.h>
#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0); cout.precision(30);
using namespace std;

int main()
{
    IOS;
    int t,a,b;
    cin>>t;
    for(int i=0;i<t;i++){
        cin>>a>>b;
        a = abs(a-b);
        cout<<a/10 + int(a%10 != 0)<<'\n';
    }
    return 0;
}
