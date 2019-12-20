#https://atcoder.jp/contests/abc135/tasks/abc135_c

n=int(input())
a=list(map(int,input().split()))
b=list(map(int,input().split()))
s=sum(b)
for i in range(n):
    if b[i]>0:
        if b[i]>=a[i]:
            b[i]-=a[i]
        else:
            a[i]-=b[i]
            b[i]=0
    if b[i]>0:
        if b[i]>=a[i+1]:
            x=a[i+1]
            b[i]-=x
            a[i+1]-=x
        else:
            a[i+1]-=b[i]
            b[i]=0
print(s-sum(b))
