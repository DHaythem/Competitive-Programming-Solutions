//https://codeforces.com/problemset/problem/1466/B

#include <bits/stdc++.h>
#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
using namespace std;

int main()
{
	IOS;
    int n,t,a;
    set<int> s;
    cin>>t;
    while(t--){
        s.clear();
        cin>>n;
        while(n--){
            cin>>a;
            if(s.find(a)==s.end())
                s.insert(a);
            else
                s.insert(a+1);
        }
        cout<<s.size()<<'\n';
    }
    return 0;
}
