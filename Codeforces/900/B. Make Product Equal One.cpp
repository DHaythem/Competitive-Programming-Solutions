//https://codeforces.com/problemset/problem/1206/B

#include <bits/stdc++.h>
#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
using namespace std;
typedef long long ll; //up to 10^18

int main()
{
	IOS;
	int t,n=0,p=0,z=0;
    ll sp=0,sn=0,res;
    cin>>t;
    int a[t];
    for(int i=0;i<t;i++){
        cin>>a[i];
        if(a[i]>0){
            sp+=a[i];
            p++;
        }
        else if(a[i]<0){
            sn+=abs(a[i]);
            n++;
        }
        else
            z++;
    }
    if(n%2!=0 && z==0)
        res=sn-n+sp-p+2;
    else
        res=sn-n+sp-p+z;
    cout<<res;
    return 0;
}
