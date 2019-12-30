#https://atcoder.jp/contests/abc121/tasks/abc121_b

n,m,c=map(int,input().split())
b=list(map(int,input().split()))
s=0
for _ in range(n):
    t=c
    a=list(map(int,input().split()))
    for i in range(m):
        t+=a[i]*b[i]
    if t>0:
        s+=1
print(s)
