#https://codeforces.com/problemset/problem/192/A

n=int(input())
d={}
t=0
for i in range(1,10**5):
    d[i*(i+1)/2]=1
for i in range(1,10**5):
    if n-(i*(i+1)/2) in d:
        t=1
        break
if t:
    print('YES')
else:
    print('NO')
