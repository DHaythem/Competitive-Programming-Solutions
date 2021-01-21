//https://codeforces.com/problemset/problem/919/B

#include<bits/stdc++.h>
#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0); cout.precision(30);
using namespace std;

int main()
{
    IOS;
    int a[10001];
    int i,j,k,s;
    i=1;
    k=19;
    while(i<10001){
        s=0;
        j=k;
        while(j){
            s+=j%10;
            j/=10;
        }
        if(s==10){
            a[i]=k;
            i++;
            k++;
        }
        else
            k++;
    }
    cin>>k;
    cout<<a[k];
    return 0;
}
