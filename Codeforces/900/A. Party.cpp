//https://codeforces.com/problemset/problem/115/A

#include <bits/stdc++.h>
#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
using namespace std;
#define max(a,b) (a>b? a : b)

int main(){
	IOS;
	int n,k,c,mx=0;
	cin>>n;
	int a[2001];
	for(int i=1;i<=n;i++)
		cin>>a[i];
	for(int i=1;i<=n;i++){
		k=a[i];
		c=1;
		while(k>0){
			c++;
			k=a[k];
		}
        mx=max(mx,c);
    }
	cout<<mx;
	return 0;
}
