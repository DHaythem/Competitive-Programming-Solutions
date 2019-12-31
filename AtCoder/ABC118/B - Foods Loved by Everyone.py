#https://atcoder.jp/contests/abc118/tasks/abc118_b

n,m=map(int,input().split())
l=[0]*(m+1)
s=0
for _ in range(n):
    t=list(map(int,input().split()))
    for e in t[1:]:
        l[e]+=1
for e in l:
    if e==n:
        s+=1
print(s)
