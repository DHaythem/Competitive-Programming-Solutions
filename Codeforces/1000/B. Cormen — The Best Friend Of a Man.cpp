//https://codeforces.com/problemset/problem/732/B

#include <bits/stdc++.h>
#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
using namespace std;

int main()
{
	IOS;
    int n,k,c=0;
    cin>>n>>k;
    int a[n],b[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
        b[i]=a[i];
    }
    for(int i=0;i<n-1;i++){
        if(a[i]+a[i+1]<k){
            a[i+1]=k-a[i];
            c+=a[i+1]-b[i+1];
        }
    }
    cout<<c<<'\n';
    for(int i=0;i<n;i++)
        cout<<a[i]<<' ';
    return 0;
}
