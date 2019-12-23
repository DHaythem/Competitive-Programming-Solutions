#https://codeforces.com/contest/1255/problem/A

t=int(input())
for _ in range(t):
    a,b=map(int,input().split())
    s=0
    d=abs(b-a)
    x=d//5
    d=d%5
    y=d//2
    d=d%2
    z=d//1
    print(z+y+x)
