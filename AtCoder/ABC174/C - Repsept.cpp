//https://atcoder.jp/contests/abc174/tasks/abc174_c

#include<bits/stdc++.h>
#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0); cout.precision(30);
#define ll long long
#define pi 3.14159265359
using namespace std;

int main()
{
    IOS;
    int k,s=0;
    cin>>k;
    for(int i=1;i<=1000000;i++){
        s=(s*10+7)%k;
        if(!s) return cout<<i,0;
    }
    return cout<<-1,0;
}
/*Notice that "X is a multiple of K" means that x % k == 0.
    We can use modular arithmetic (modulo K) to find possible remainders.
    Adding another 7 to the end of X is the same as x * 10 + 7.
    After K iterations you don't get a 0, that means there's no answer, because there's only K different remainders modulo K.*/
