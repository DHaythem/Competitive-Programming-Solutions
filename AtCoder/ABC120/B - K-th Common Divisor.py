#https://atcoder.jp/contests/abc120/tasks/abc120_b

a,b,k=map(int,input().split())
l=[1]
n=min(a,b)
for i in range(2,n+1):
    if a%i==0 and b%i==0:
        l.append(i)
l.reverse()
print(l[k-1])
