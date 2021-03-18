//https://codeforces.com/problemset/problem/948/A

#include <bits/stdc++.h>
#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
using namespace std;

int main(){
	IOS;
    int r,c;
    cin>>r>>c;
    char a[r][c];
    string s;
    for(int i=0;i<r;i++){
        cin>>s;
        for(int j=0;j<c;j++)
            if(s[j]=='.')
                a[i][j]='D';
            else
                a[i][j]=s[j];
    }
    for(int i=0;i<r;i++){
        if(a[i][c-1]=='S' && a[i][c-2]=='W' || a[i][c-1]=='W' && a[i][c-2]=='S'){
            cout<<"No";
            return 0;
        }
        for(int j=1;j<c-1;j++)
            if(a[i][j]=='S'){
                if(a[i][j-1]=='W' || a[i][j+1]=='W'){
                    cout<<"No";
                    return 0;
                }
            else if(a[i][j]=='W'){
                if(a[i][j-1]=='S' || a[i][j+1]=='S'){
                    cout<<"No";
                    return 0;
                }
            }
        }
    }
    for(int i=0;i<c;i++){
        if(a[r-1][i]=='S' && a[r-2][i]=='W' || a[r-1][i]=='W' && a[r-2][i]=='S'){
            cout<<"No";
            return 0;
        }
        for(int j=1;j<r-1;j++)
            if(a[j][i]=='S'){
                if(a[j-1][i]=='W' || a[j+1][i]=='W'){
                    cout<<"No";
                    return 0;
                }
            else if(a[j][i]=='W'){
                if(a[j-1][i]=='S' || a[j+1][i]=='S'){
                    cout<<"No";
                    return 0;
                }
            }
        }
    }
    cout<<"Yes\n";
    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++)
            cout<<a[i][j];
        cout<<'\n';
    }
    return 0;
}
