//https://codeforces.com/problemset/problem/1327/B

#include <bits/stdc++.h>
#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
using namespace std;

int main(){
	IOS;
    int t,n,k,x,y;
    cin>>t;
    while(t--){
        cin>>n;
        int q[n+1]={},p[n+1]={};
        for(int i=1;i<=n;i++){
            cin>>k;
            int a[k];
            for(int j=0;j<k;j++)
                cin>>a[j];
            for(int j=0;j<k;j++){
                if(q[a[j]]==0){
                    q[a[j]]=1;
                    p[i]=1;
                    break;
                }
            }
        }
        x=0;
        y=0;
        for(int i=1;i<=n;i++){
            if(q[i]==0){
                x=i;
                break;
            }
        }
        for(int i=1;i<=n;i++){
            if(p[i]==0){
                y=i;
                break;
            }
        }
        if(x!=0)
            cout<<"IMPROVE\n"<<y<<' '<<x<<'\n';
        else
            cout<<"OPTIMAL\n";
    }
    return 0;
}
