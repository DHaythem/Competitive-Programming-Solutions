//https://codeforces.com/problemset/problem/1462/B

#include <bits/stdc++.h>
#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
using namespace std;
typedef long long ll; //up to 10^18


int main()
{
	IOS;
    int t,n;
    cin>>t;
    string s;
    while(t--){
        cin>>n;
        cin>>s;
        if(s.substr(0,1)+s.substr(n-3,n)=="2020" || s.substr(0,2)+s.substr(n-2,n)=="2020" || s.substr(0,3)+s.substr(n-1,n)=="2020" || s.substr(0,4)=="2020" || s.substr(n-4,n)=="2020")
            cout<<"YES\n";
        else
            cout<<"NO\n";
    }
    return 0;
}
