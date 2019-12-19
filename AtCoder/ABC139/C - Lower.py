#https://atcoder.jp/contests/abc139/tasks/abc139_c

n=int(input())
h=list(map(int,input().split()))
l=[0]*n
for i in range(1,n):
    if h[i]<=h[i-1]:
        l[i]=1+l[i-1]
print(max(l))
