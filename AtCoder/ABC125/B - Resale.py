#https://atcoder.jp/contests/abc125/tasks/abc125_b

n=int(input())
v=list(map(int,input().split()))
c=list(map(int,input().split()))
mx=0
for i in range(n):
    s=0
    for j in range(i,n):
        if v[j]>c[j]:
            s+=v[j]-c[j]
    mx=max(mx,s)
print(mx)
