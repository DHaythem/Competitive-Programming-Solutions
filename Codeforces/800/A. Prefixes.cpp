//https://codeforces.com/problemset/problem/1216/A

#include<bits/stdc++.h>
#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0); cout.precision(30);
using namespace std;

int main()
{
    IOS;
    int n,c=0;
    string s;
    cin>>n>>s;
    for(int i=0; i<n; i+=2){
        if(s[i]==s[i+1]){
            c++;
            if(s[i]=='a') s[i]='b';
            else s[i]='a';
        }
    }
    cout<<c<<'\n'<<s;
    return 0;
}
