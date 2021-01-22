//https://codeforces.com/problemset/problem/331/C1

#include <bits/stdc++.h>
#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
using namespace std;
#define max(a,b) (a>b? a : b)

int main()
{
    IOS;
    int n,c=0,m,k;
    cin>>n;
    while(n>0){
        k=n;
        m=0;
        while(k>0 && m!=9){
            m=max(m,k%10);
            k/=10;
        }
        c++;
        n-=m;
    }
    cout<<c;
    return 0;
}
