#https://atcoder.jp/contests/abc137/tasks/abc137_c

N=int(input())
d={}
x=0
for i in range(N):
    s=''.join(sorted(input()))
    if s in d:
        x+=d[s]
        d[s]+=1
    else:
        d[s]=1
print(x)
