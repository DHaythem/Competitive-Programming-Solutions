//https://codeforces.com/problemset/problem/746/B

#include<bits/stdc++.h>
#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0); cout.precision(30);
using namespace std;

int main()
{
    IOS;
    int a;
    cin>>a;
    string s,t="",r="";
    cin>>s;
    int n=s.size();
    for(int i=0;i<n/2;i++) swap(s[i],s[n-i-1]); //reversing the string
    for(int i=0;i<a;i++){
        if(i%2==0) t=s[i]+t;
        else r=r+s[i];
    }
    cout<<r<<t;
    return 0;
}
