//https://codeforces.com/problemset/problem/734/A

#include<bits/stdc++.h>
#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0); cout.precision(30);
using namespace std;

int main()
{
    IOS;
    int a=0,d=0,n;
    string s;
    cin>>n>>s;
    for(int i=0;i<s.size();i++){
        if(s[i]=='A') a++;
        else d++;
    }
    if(a==d) cout<<"Friendship";
    else if (a>d) cout<<"Anton";
    else cout<<"Danik";
    return 0;
}
