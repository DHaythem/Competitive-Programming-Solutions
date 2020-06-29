//https://codeforces.com/problemset/problem/263/A

#include<bits/stdc++.h>
#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0); cout.precision(30);
#define ll long long
#define pi 3.14159265359
using namespace std;

int main()
{
    IOS;

    int a,x=0,y=1;
    for (int i = 0; i<25; i++){

        cin>>a;
        x++;

        if (a==1){
            cout<<abs(x-3)+abs(y-3)<<"\n";
            break;
        }

        if (x==5){
            y++;
            x=0;
        }
    }
    return 0;
}
