#https://codeforces.com/contest/1257/problem/A

t=int(input())
for _ in range(t):
    n,x,a,b=map(int,input().split())
    print(min(n-1,abs(a-b)+x))
