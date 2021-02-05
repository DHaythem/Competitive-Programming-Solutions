//https://codeforces.com/contest/1473/problem/A

#include <bits/stdc++.h>
#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
using namespace std;

int main()
{
    IOS;
    int t,n,d;
    cin>>t;
    while(t--){
        cin>>n>>d;
        int a[n];
        for(int i=0;i<n;i++)
            cin>>a[i];
        sort(a,a+n);
        if(a[0]<=d && a[1]<=d && a[0]+a[1]<=d || a[n-1]<=d)
            cout<<"YES"<<'\n';
        else
            cout<<"NO"<<'\n';
    }
    return 0;
}
