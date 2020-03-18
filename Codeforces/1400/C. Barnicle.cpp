//https://codeforces.com/gym/272600/problem/C

#include<bits/stdc++.h>
#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);   cout.precision(30);
#define ll long long
#define pi 3.14159265359
using namespace std;

int main()
{
    IOS;
    string s; cin>>s;
    int pos=0;
    for(char c : s){
            if(c=='e')
                break;
        pos++;
    }

    int shift=stoi(s.substr(pos+1,3));
    if(shift==0 && s[pos-1]=='0'){
        cout<<s[0]<<endl;
        return 0;
    }
    
    cout<<s[0];

    cout<<s.substr(2,min(pos-2,shift));
    if(shift>=pos-2){
        for(int i=0;i<shift-pos+2;i++){
            cout<<'0';
        }
    }else{
            cout<<'.';
            cout<<s.substr(shift+2,pos-2-shift);
    }

    return 0;
}
