//https://codeforces.com/problemset/problem/1272/C

#include <bits/stdc++.h>
#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
using namespace std;
typedef long long ll;

int main()
{
    IOS;
    ll n,k,r=0,l=0,ans=0;
    cin>>n>>k;
    string s;
    cin>>s;
    set<char> e;
    char c;
    while(k--){
        cin>>c;
        e.insert(c);
    }
    while(r<s.size()){
        if(e.find(s[r])==e.end()){
            s.erase(r,1);
            ans+=(r-l)*(r-l+1)/2;
            l=r;
        }
        else
            r++;
    }
    ans+=(r-l)*(r-l+1)/2;
    cout<<ans;
    return 0;
}
