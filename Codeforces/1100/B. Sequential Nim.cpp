//https://codeforces.com/problemset/problem/1382/B

#include<bits/stdc++.h>
#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0); cout.precision(30);
using namespace std;

int main()
{
    IOS;
    int t,n,a,c,f;
    cin>>t;
    while(t--){
        cin>>n;
        c=0;
        f=1;
        while(n--){
            cin>>a;
            if(a==1 && f==1)
                c++;
            else
                f=0;
        }
        if(c%2==0 && f!=1 || c%2!=0 && f==1)
            cout<<"First"<<'\n';
        else
            cout<<"Second"<<'\n';
    }
    return 0;
}
