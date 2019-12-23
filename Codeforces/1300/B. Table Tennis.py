#https://codeforces.com/problemset/problem/879/B

n,k=map(int,input().split())
l=list(map(int,input().split()))
t,i,j=0,0,1
test=1
if n<k:
    print(max(l))
    test=0
while t<k and test:
    if l[i]>l[j]:
        t+=1
        j+=1
    else:
        i=j
        j+=1
        t=1
    if j==n:
        j=0
if test:
    print(l[i])
