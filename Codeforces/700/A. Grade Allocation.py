#https://codeforces.com/problemset/problem/1316/A

t=int(input())
for _ in range(t):
    n,m=map(int,input().split())
    l=list(map(int,input().split()))
    print(min(m,l[0]+sum(l[1:])))
