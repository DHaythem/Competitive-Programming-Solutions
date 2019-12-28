#https://atcoder.jp/contests/abc122/tasks/abc122_c

n,q=map(int,input().split())
s=input()
a=[0]*(n+1)
for i in range(0,n):
    if s[i-1:i+1]=="AC":
        a[i]=a[i-1]+1
    else:
        a[i]=a[i-1]

for i in range(q):
    l,r=[int(i) for i in input().split()]
    print(a[r-1]-a[l-1])
