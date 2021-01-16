//https://codeforces.com/problemset/problem/894/A

#include <bits/stdc++.h>
#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
using namespace std;

//Solution O(n^3)
int main()
{
	IOS;
    string s;
    cin>>s;
    int c=0;
    int n=s.size();
    for(int i=0;i<n-2;i++){
        if(s[i]=='Q'){
            for(int j=i+1;j<n-1;j++){
                if(s[j]=='A'){
                    for(int k=j+1;k<n;k++){
                        if(s[k]=='Q') c++;
                    }
                }
            }
        }
    }
    cout<<c;
    return 0;
}

//Solution O(n)
/*int main()
{
	IOS;
    string s;
    cin>>s;
    int n=s.size();
    int dp[n];
    dp[0]=('Q'==s[0]);
    for(int i=1;i<n;i++){
        if(s[i]=='Q') dp[i]=dp[i-1]+1;
        else dp[i]=dp[i-1];
    }
    int m=dp[n-1];
    int res=0;
    for(int i=1;i<n-1;i++){
        if(s[i]=='A') res+=dp[i-1]*(m-dp[i-1]);
    }
    cout<<res;
    return 0;
}*/
