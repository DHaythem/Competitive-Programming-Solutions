//https://codeforces.com/contest/381/problem/A

#include<bits/stdc++.h>
#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0); cout.precision(30);
using namespace std;

int main()
{
    IOS;
    int n;
    cin>>n;
    int v[n];
    int a[2]={0};
    int c=0;
    int k=n-1;
    for(int i=0;i<n;i++) cin>>v[i];
    for(int i=0;i<n;i++){
        if(v[c]<v[k])a[i%2]+=v[k--];
        else a[i%2]+=v[c++];
    }
    cout<<a[0]<<" "<<a[1];
    return 0;
}
