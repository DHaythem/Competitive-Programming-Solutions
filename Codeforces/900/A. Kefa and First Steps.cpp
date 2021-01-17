//https://codeforces.com/problemset/problem/580/A

#include <bits/stdc++.h>
#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
using namespace std;

int main()
{
	IOS;
    int n,c=0,m=0;
    cin>>n;
    int a[n+1];
    a[0]=0;
    for(int i=1;i<n+1;i++){
        cin>>a[i];
        if(a[i]>=a[i-1])
            c++;
        else{
            m=max(m,c);
            c=1;
        }
    }
    m=max(m,c);
    cout<<m;
    return 0;
}
