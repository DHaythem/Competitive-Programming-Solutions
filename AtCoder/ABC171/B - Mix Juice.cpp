//https://atcoder.jp/contests/abc171/tasks/abc171_b

#include<bits/stdc++.h>
#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0); cout.precision(30);
#define ll long long
#define pi 3.14159265359
using namespace std;

int main()
{
    IOS;
    int n,k;
    cin>>n>>k;
    int p[n];
    for(int i=0;i<n;i++) cin>>p[i];
    sort(p,p+n);
    int s=0;
    for(int i=0;i<k;i++) s+=p[i];
    cout<<s;
    return 0;
}
