//https://codeforces.com/problemset/problem/489/B

#include <bits/stdc++.h>
#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
using namespace std;

int main()
{
    IOS;
    int n,m,i,j,c=0;
    cin>>n;
    int b[n];
    for(i=0;i<n;i++)
        cin>>b[i];
    cin>>m;
    int g[m];
    for(i=0;i<m;i++)
        cin>>g[i];
    sort(b,b+n);
    sort(g,g+m);
    i=0;
    j=0;
    while(i<n && j<m){
        if(abs(b[i]-g[j])<2){
            c++;
            i++;
            j++;
        }
        else{
            if(b[i]>g[j])
                j++;
            else
                i++;
        }
    }
    cout<<c;
    return 0;
}
