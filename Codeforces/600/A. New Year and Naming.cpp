//https://codeforces.com/problemset/problem/1284/A

#include<bits/stdc++.h>
#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);   cout.precision(30);
using namespace std;

int main()
{
    IOS;
    int n,m,q,y;
    cin>>n>>m;
    string nn[21],mm[21];
    for(int i=0;i<n;i++) cin>>nn[i];
    for(int i=0;i<m;i++) cin>>mm[i];
    cin>>q;
    while(q--){
        cin>>y;
        y--;
        cout<<nn[y%n]+mm[y%m]+"\n";
    }
}
