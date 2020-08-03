//https://atcoder.jp/contests/abc174/tasks/abc174_d

#include<bits/stdc++.h>
#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0); cout.precision(30);
#define ll long long
#define pi 3.14159265359
using namespace std;

int main()
{
    IOS;
    int n;
    cin>>n;
    string s;
    cin>>s;
    int i=0,j=n-1;
    int c=0;
    while(i<n && j>=0 && i<j){
        while (i<n && s[i]=='R')    i++;
        while (j>=0 && s[j]=='W')   j--;
        if (i<n && j>=0 && i<j){
            swap(s[i],s[j]);
            c++;
        }
    }
    cout<<c;
    return 0;
}
