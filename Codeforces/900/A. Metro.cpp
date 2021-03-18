//https://codeforces.com/problemset/problem/1055/A

#include <bits/stdc++.h>
#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
using namespace std;

int main(){
	IOS;
    int n,s;
    cin>>n>>s;
    int a[n],b[n];
    for(int i=0;i<n;i++)
        cin>>a[i];
    for(int i=0;i<n;i++)
        cin>>b[i];
    if(a[0]==1 && a[s-1]==1){
        cout<<"YES";
        return 0;
    }
    if(a[0]==0 || a[s-1]==0 && b[s-1]==0){
        cout<<"NO";
        return 0;
    }
    for(int i=s;i<n;i++){
        if(a[i]==1 && b[i]==1){
            cout<<"YES";
            return 0;
        }
    }
    cout<<"NO";
    return 0;
}
