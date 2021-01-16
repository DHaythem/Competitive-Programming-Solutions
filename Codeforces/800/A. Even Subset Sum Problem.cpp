//https://codeforces.com/problemset/problem/1323/A

#include <bits/stdc++.h>
#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
using namespace std;

int main()
{
	IOS;
    int t,n,c,v[2];
    cin>>t;
    while(t--){
        cin>>n;
        int a[n];
        for(int i=0;i<n;i++)
            cin>>a[i];
        c=0;
        for(int i=0;i<n;i++){
            if(a[i]%2==0){
                c=2;
                cout<<1<<'\n'<<i+1<<'\n';
                break;
            }
            else{
                v[c]=i+1;
                c++;
            }
            if(c==2){
                cout<<2<<'\n'<<v[0]<<' '<<v[1]<<'\n';
                break;
            }
        }
        if(c<2)
            cout<<-1<<'\n';
    }
    return 0;
}
