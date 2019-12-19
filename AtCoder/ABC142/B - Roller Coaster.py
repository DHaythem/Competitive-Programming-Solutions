#https://atcoder.jp/contests/abc142/tasks/abc142_b

n,k=map(int,input().split())
l=list(map(int,input().split()))
s=0
for e in l:
    if e>=k:
        s+=1
print(s)
