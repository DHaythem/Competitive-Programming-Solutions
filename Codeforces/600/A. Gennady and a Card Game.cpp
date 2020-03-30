//https://codeforces.com/contest/1097/problem/A

#include<bits/stdc++.h>
#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);   cout.precision(30);
using namespace std;

int main()
{
    IOS;
    string s, t;
    cin >> s;
    while(cin >> t){
        if(s[0] == t[0] || s[1] == t[1]){
            cout << "YES";
            return 0;
        }
    }
    cout << "NO";
}
