//https://codeforces.com/problemset/problem/1355/B

#include<bits/stdc++.h>
#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0); cout.precision(30);
using namespace std;

int main()
{
    IOS;
    int t,n,s,c;
    cin>>t;
    while(t--){
        cin>>n;
        int a[n];
        for(int i=0;i<n;i++)
            cin>>a[i];
        sort(a,a+n);
        s=0;
        c=1;
        for(int i=0;i<n;i++){
            if(c==a[i]){
                s++;
                c=1;
            }
            else
                c++;
        }
        cout<<s<<'\n';
    }
    return 0;
}
