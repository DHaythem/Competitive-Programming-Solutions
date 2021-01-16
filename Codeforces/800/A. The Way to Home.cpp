//https://codeforces.com/problemset/problem/910/A

#include <bits/stdc++.h>
#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
using namespace std;

int main()
{
	IOS;
    int n,d;
    cin>>n>>d;
    string s;
    cin>>s;
    int pos=0,c=0,aux;
    while(pos!=(n-1)){
        aux=d;
        while(aux){
            if(s[pos+aux]=='1'){
                pos+=aux;
                c++;
                break;
            }
            else
                aux--;
        }
        if(aux==0){
            cout<<-1;
            break;
        }
    }
    if(pos==(n-1))
        cout<<c;
    return 0;
}
