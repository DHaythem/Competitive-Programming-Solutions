#https://atcoder.jp/contests/abc129/tasks/abc129_b

n=int(input())
l=list(map(int,input().split()))
s=sum(l)
for i in range(n):
    t=abs(sum(l[0:i])-sum(l[i:]))
    if t<s:
        s=t
print(s)
