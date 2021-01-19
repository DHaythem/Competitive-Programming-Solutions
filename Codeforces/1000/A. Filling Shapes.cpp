//https://codeforces.com/problemset/problem/1182/A

#include <bits/stdc++.h>
#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
using namespace std;

int main()
{
    //freopen("bar.in", "r", stdin);
	IOS;
    int n,a[61];
    a[1]=0;
    a[2]=2;
    for(int i=3;i<61;i++){
        if(i%2==0)
            a[i]=a[i-2]*2;
        else
        a[i]=0;
    }
    cin>>n;
    cout<<a[n];
}
