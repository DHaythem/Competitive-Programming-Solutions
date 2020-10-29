//https://codeforces.com/problemset/problem/686/A

#include<bits/stdc++.h>
#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0); cout.precision(30);
using namespace std;

int main()
{
    IOS;
    int n;
    long long x,d,k=0;
    char c;
    cin>>n>>x;
    for(int i=0 ;i<n;i++){
        cin>>c>>d;
        if(c=='+') x+=d;
        else{
            if(x>=d) x-=d;
            else k++;
        }
    }
    cout<<x<<' '<<k;
    return 0;
}
