#include<bits/stdc++.h>
#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0); cout.precision(30);
using namespace std;

int main()
{
    //freopen("bar.in", "r", stdin);
    IOS;
    int t,n,m,x,y,p,c,cc;
    string s;
    cin>>t;
    while(t--){
        cin>>n>>m>>x>>y;
        c=0;
        cc=0;
        for(int i=0;i<n;i++){
            cin>>s;
            p=0;
            if(s[0]=='.'){
                c++;
                p++;
            }
            for(int j=1;j<m;j++){
                if(s[j]=='.'){
                    c++;
                    if(s[j]==s[j-1] && p==1){
                        cc++;
                        p=0;
                    }
                    else
                        p=1;
                }
            }
        }
        if(x*2<y)
            cout<<x*c<<'\n';
        else
            cout<<x*(c-cc*2)+y*cc<<'\n';
    }
    return 0;
}
