//https://codeforces.com/problemset/problem/525/A

#include<bits/stdc++.h>
#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0); cout.precision(30);
using namespace std;

int main()
{
    IOS;
    int n,c=0;
    cin>>n;
    string s;
    cin>>s;
    int a[26]={0};
    for(int i=0;i<s.size();i++){
        if(islower(s[i])) a[s[i]-97]++;
        else{
            s[i]=tolower(s[i]);
            if(a[s[i]-97]<1) c++;
            else a[s[i]-97]--;
        }
    }
    cout<<c;
    return 0;
}
