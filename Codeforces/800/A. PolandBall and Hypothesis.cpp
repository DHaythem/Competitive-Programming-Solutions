//https://codeforces.com/problemset/problem/755/A

#include <bits/stdc++.h>
#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
using namespace std;

int prime(int n)
{
    int flag=1;
    for(ll i=2;i<=n/2;i++){
        if(n%i==0){
            flag=0;
            break;
        }
    }
    return flag;
}

int main(){
	IOS;
	int n;
	cin>>n;
	for(int i=1;i<1001;i++)
    if(prime(n*i+1)==0){
        cout<<i;
        break;
    }
    return 0;
}
