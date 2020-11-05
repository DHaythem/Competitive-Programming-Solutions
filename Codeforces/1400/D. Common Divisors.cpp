//https://codeforces.com/problemset/problem/182/D

#include<bits/stdc++.h>
#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0); cout.precision(30);
using namespace std;

int main()
{
    IOS;
    int c=0,z,n;
    string a,b,s,t;
    cin>>a>>b;
    int x=a.size();
    int y=b.size();
    if(x>y){
        a.swap(b);
        z=x;
        x=y;
        y=z;
    }
    for(int i=1;i<=x;i++){
        if(x%i==0 && y%i==0){
            s=a.substr(0, i);
            t="";
            n=(y/i)-(x/i);
            for(int j=0;j<(x/i);j++) t+=s;
            if(a.compare(t)==0){
                for(int j=0;j<n;j++) t+=s;
                if(b.compare(t)==0) c++;
            }
        }
    }
    cout<<c;
    return 0;
}
