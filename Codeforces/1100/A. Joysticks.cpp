//https://codeforces.com/problemset/problem/651/A

#include<bits/stdc++.h>
#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0); cout.precision(30);
using namespace std;

int main()
{
    IOS;
    int a,b,c=0;
    cin>>a>>b;
    while(a>0 && b>0){
        if(a==1 && b==1)
            break;
        c++;
        if(a>b){
            a-=2;
            b++;
        }
        else{
            b-=2;
            a++;
        }
    }
    cout<<c;
    return 0;
}
