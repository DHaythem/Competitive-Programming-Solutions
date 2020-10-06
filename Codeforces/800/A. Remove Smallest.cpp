//https://codeforces.com/contest/1399/problem/A

#include<bits/stdc++.h>
#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0); cout.precision(30);
using namespace std;

int main()
{
    IOS;
    int t,n,flag;
    cin>>t;
    for(int i=0; i<t; i++){
        flag=1;
        cin>>n;
        int a[n];
        for(int j=0; j<n; j++) cin>>a[j];
        sort(a, a+n);
        for(int j=0; j<n-1; j++){
            if(a[j+1]-a[j]>1){
                cout<<"NO"<<'\n';
                flag=0;
                break;
            }
        }
        if(flag) cout<<"YES"<<'\n';
    }
    return 0;
}
