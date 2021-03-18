//https://codeforces.com/problemset/problem/939/A

#include <bits/stdc++.h>
#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
using namespace std;

int main(){
	IOS;
	int n,k,c;
	cin>>n;
	int a[n+1];
	for(int i=1;i<=n;i++)
		cin>>a[i];
	for(int i=1;i<=n;i++){
		k=a[i];
		c=1;
		while(c<3){
			c++;
			k=a[k];
		}
		c=1;
		if(k==i){
            cout<<"YES";
            return 0;
		}
    }
	cout<<"NO";
    return 0;
}
