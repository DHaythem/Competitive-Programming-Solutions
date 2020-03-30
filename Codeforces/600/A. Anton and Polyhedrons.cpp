//https://codeforces.com/problemset/problem/785/A

#include<bits/stdc++.h>
#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);   cout.precision(30);
using namespace std;

int main()
{
    IOS;
    int n, c=0;
    cin >> n;
    int l[5]={4,6,8,12,20};
    string s, t="TCODI";
    while(n--){
        cin >> s;
        c+=l[t.find(s[0])];
    }
    cout << c;

}
