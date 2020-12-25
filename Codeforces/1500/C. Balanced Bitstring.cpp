//https://codeforces.com/contest/1405/problem/C

#include<bits/stdc++.h>
#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0); cout.precision(30);
using namespace std;
typedef long long ll;

int main()
{
    IOS;
    int t,n,k,test,one,zero;
    string s;
    cin>>t;
    while(t--){
        cin>>n>>k>>s;
        test=1;
        for(int i=0;i<n;i++){
            if(s[i]!='?' && s[i%k]!='?' && s[i]!=s[i%k]){
                test=0;
                break;
            }
            if(s[i]!='?') s[i%k]=s[i];
        }
        zero=0;
        one=0;
        for(int i=0;i<k;i++){
            if(s[i]=='0') zero++;
            else if(s[i]=='1') one++;
        }
        if(test && zero<=k/2 && one<=k/2) cout<<"YES"<<'\n';
        else cout<<"NO"<<'\n';
    }
    return 0;
}
