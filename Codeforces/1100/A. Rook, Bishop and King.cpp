//https://codeforces.com/problemset/problem/370/A

#include <bits/stdc++.h>
#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
using namespace std;
#define min(a,b) (a>b? b : a)
#define max(a,b) (a>b? a : b)

int main(){
	IOS;
    int bx,by,ex,ey;
    int rook,bishop,king;
    cin>>bx>>by>>ex>>ey;
    rook=min(1,abs(bx-ex))+min(1,abs(by-ey));
    king=max(abs(bx-ex),abs(by-ey));
    if((bx+by)%2!=(ex+ey)%2)
        bishop=0;
    else if(bx+by==ex+ey || bx-by==ex-ey)
        bishop=1;
    else
        bishop=2;
    cout<<rook<<' '<<bishop<<' '<<king;
    return 0;
} 
