#https://atcoder.jp/contests/abc133/tasks/abc133_b

n,d=map(int,input().split())
l=[]
s=0
for _ in range(n):
    l.append(list(map(int,input().split())))
for i in range(n-1):
    for j in range(i+1,n):
        x=0
        for k in range(d):
            x+=(l[i][k]-l[j][k])**2
        x=x**.5
        y=int(x)
        if x==y:
            s+=1
print(s)
