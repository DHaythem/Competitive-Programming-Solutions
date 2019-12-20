#https://atcoder.jp/contests/abc135/tasks/abc135_b

n=int(input())
l=list(map(int,input().split()))
t=l.copy()
t.sort()
s=0
for i in range(n):
    if t[i]!=l[i]:
        s+=1
if s>2:
    print('NO')
else:
    print('YES')
