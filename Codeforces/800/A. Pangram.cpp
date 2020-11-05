//https://codeforces.com/problemset/problem/520/A

#include<bits/stdc++.h>
#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0); cout.precision(30);
using namespace std;

int main()
{
    IOS;
    int n;
    cin>>n;
    string s;
    cin>>s;
    int a[26]={0};
    for(int i=0;i<n;i++){
        s[i]=tolower(s[i]);
        a[s[i]-97]=1;
    }
    for(int i=0;i<26;i++){
        if(a[i]==0){
            cout<<"NO";
            return 0;
        }
    }
    cout<<"YES";
    return 0;
}
