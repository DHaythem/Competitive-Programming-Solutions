#https://atcoder.jp/contests/abc148/tasks/abc148_d

n=int(input())
l=list(map(int,input().split()))
s=0
j=1
for i in range(n):
    if l[i]!=j:
       s+=1
    else:
        j+=1
if s==n:
    print(-1)
else:
    print(s)
