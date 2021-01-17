//https://codeforces.com/problemset/problem/1451/B

#include <bits/stdc++.h>
#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
using namespace std;

int main()
{
	IOS;
    int t,n,q,l,r,test;
    string s;
    cin>>t;
    while(t--){
        cin>>n>>q;
        cin>>s;
        while(q--){
            test=0;
            cin>>l>>r;
            for(int i=0;i<l-1;i++){
                if(s[i]==s[l-1]){
                    test=1;
                    break;
                }
            }
            if(test==0){
                for(int i=r;i<n;i++){
                    if(s[i]==s[r-1]){
                        test=1;
                        break;
                    }
                }
            }
            if(test)
                cout<<"YES\n";
            else
                cout<<"NO\n";
        }
    }
    return 0;
}
