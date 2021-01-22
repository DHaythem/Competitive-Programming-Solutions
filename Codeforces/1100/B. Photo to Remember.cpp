//https://codeforces.com/problemset/problem/522/B

#include <bits/stdc++.h>
#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
using namespace std;
#define max(a,b) (a>b? a : b)

int main()
{
    IOS;
    int n,s=0,m1=1,j=0,m2=0;
    cin>>n;
    int w[n],h[n];
    for(int i=0;i<n;i++){
        cin>>w[i]>>h[i];
        s+=w[i];
        if(m1<h[i]){
            m1=h[i];
            j=i;
        }
    }
    h[j]=0;
    for(int i=0;i<n;i++)
        m2=max(m2,h[i]);
    for(int i=0;i<n;i++){
        if(i!=j)
            cout<<(s-w[i])*m1<<' ';
        else
            cout<<(s-w[i])*m2<<' ';
    }
    return 0;
}
