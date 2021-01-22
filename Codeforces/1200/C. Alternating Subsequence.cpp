//https://codeforces.com/problemset/problem/1343/C

#include <bits/stdc++.h>
#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
using namespace std;
typedef long long ll;

int main()
{
    IOS;
    int t,n,x,k;
    ll s;
    cin>>t;
    while(t--){
        cin>>n;
        cin>>x;
        vector<int> v;
        v.push_back(x);
        k=0;
        for(int i=1;i<n;i++){
            cin>>x;
            if(x>0 && v[k]>0){
                if(x>v[k])
                    v[k]=x;
            }
            else if(x<0 && v[k]<0){
                if(x>v[k])
                    v[k]=x;
            }
            else{
                v.push_back(x);
                k++;
            }
        }
        s=0;
        for(auto& e : v)
            s+=e;
        cout<<s<<'\n';
    }
    return 0;
}
