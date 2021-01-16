//https://codeforces.com/problemset/problem/702/A

#include <bits/stdc++.h>
#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
using namespace std;

int main()
{
	IOS;
	int n;
    cin>>n;
    int a[n];
    int c=1,res=1;
    for(int i=0;i<n;i++)
        cin>>a[i];
    for(int i=1;i<n;i++){
        if(a[i]>a[i-1]) c++;
        else c=1;
        res=max(res,c);
    }
    cout<<res;
    return 0;
}
