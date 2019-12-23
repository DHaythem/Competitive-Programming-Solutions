#https://atcoder.jp/contests/abc127/tasks/abc127_c

n,m=list(map(int,input().split()))
mn=1
mx=n
for _ in range(m):
    l,r=map(int,input().split())
    mn=max(mn,l)
    mx=min(mx,r)
print(max(mx-mn+1,0))
