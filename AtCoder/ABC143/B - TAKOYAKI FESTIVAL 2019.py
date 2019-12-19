#https://atcoder.jp/contests/abc143/tasks/abc143_b

n=int(input())
l=list(map(int,input().split()))
s=0
for i in range(n-1):
    for j in range(i+1,n):
        s+=l[i]*l[j]
print(s)
