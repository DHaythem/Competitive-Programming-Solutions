//https://codeforces.com/problemset/problem/753/A

#include<bits/stdc++.h>
#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0); cout.precision(30);
using namespace std;

int main()
{
    IOS;
    int n;
    cin>>n;
    int k=n,i=1;
    while(k>=i){
        k-=i;
        i++;
    }
    cout<<i-1<<'\n';
    for(int j=1;j<i-1;j++)
        cout<<j<<' ';
    cout<<k+i-1;
    return 0;
}
