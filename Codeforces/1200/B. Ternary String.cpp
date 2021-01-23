//https://codeforces.com/problemset/problem/1354/B

#include<bits/stdc++.h>
#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0); cout.precision(30);
#define min(a,b) (a>b? b : a)
#define max(a,b) (a>b? a : b)
using namespace std;

int main()
{
    IOS;
    int t,n,a,b,c,m,x,y;
    string s;
    cin>>t;
    while(t--){
        cin>>s;
        n=s.size();
        a=-1;
        b=-1;
        c=-1;
        m=200001;
        for(int i=0;i<n;i++){
            if(s[i]=='1')
                a=i;
            else if(s[i]=='2')
                b=i;
            else
                c=i;
            if(a!=-1 && b!=-1 && c!=-1){
                x=max(a,b);x=max(x,c);
                y=min(a,b);y=min(y,c);
                m=min(m,x-y+1);
            }
        }
        if(m<200001)
            cout<<m<<'\n';
        else
            cout<<0<<'\n';
    }
    return 0;
}
