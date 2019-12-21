#https://atcoder.jp/contests/abc130/tasks/abc130_b

n,x=map(int,input().split())
l=list(map(int,input().split()))
s=1
d=0
for i in range(n):
    d=d+l[i]
    if d<=x:
        s+=1
    else:
        break
print(s)
