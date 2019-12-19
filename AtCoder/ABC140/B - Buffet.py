#https://atcoder.jp/contests/abc140/tasks/abc140_b

n=int(input())
a=list(map(int,input().split()))
b=list(map(int,input().split()))
c=list(map(int,input().split()))
s=sum(b)
t=a[0]
for e in a[1:]:
    if e-1==t:
        s+=c[t-1]
    t=e
print(s)
