#https://atcoder.jp/contests/abc140/tasks/abc140_c

n=int(input())
b=list(map(int,input().split()))
a=[0]*n
a[0]=b[0]
a[1]=b[0]
for i in range(1,n-1):
    x=b[i]
    a[i+1]=x
    if a[i]>x:
        a[i]=x
print(sum(a))
