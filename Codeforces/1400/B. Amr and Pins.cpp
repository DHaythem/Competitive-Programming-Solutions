//https://codeforces.com/problemset/problem/507/B

#include<bits/stdc++.h>
#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0); cout.precision(30);
using namespace std;

int main()
{
    IOS;
    long long  r,x,y,x1,y1;
    cin>>r>>x>>y>>x1>>y1;
    double dist=sqrt(pow(x-x1,2)+pow(y-y1,2));
    cout<<ceil(dist/(2*r)); //ceil(x) Rounds x upward, returning the smallest integral value that is not less than x.
    return 0;
}
