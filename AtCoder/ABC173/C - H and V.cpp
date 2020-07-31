//https://atcoder.jp/contests/abc173/tasks/abc173_c

#include<bits/stdc++.h>
#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0); cout.precision(30);
#define ll long long
#define pi 3.14159265359
using namespace std;

int main()
{
    IOS;

    int h,w,k;
    cin>>h>>w>>k;
    string s[6];
    for(int i=0;i<h;i++)
        cin>>s[i];
    int res=0;
    for(int i=0;i<(1<<h);i++){
        for(int j=0;j<(1<<w);j++){
            int c=0;
            for(int x=0;x<h;x++){
                for(int y=0;y<w;y++){
                    if(!(i>>x&1) and !(j>>y&1)) // >> pour décaler à la position 0 et &1 pour éliminer les bits restant à gauche
                        c+= s[x][y]=='#';
                }
            }
            res+= c==k;
        }
    }
    cout<<res;
    return 0;
}
