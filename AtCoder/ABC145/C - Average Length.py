#https://atcoder.jp/contests/abc145/tasks/abc145_c

n=int(input())
l=[]
s=0
f=1
for i in range(2,n+1):
    f*=i
for _ in range(n):
    l.append(list(map(int,input().split())))
for i in range(n-1):
    for j in range(i+1,n):
        s+=((l[i][0]-l[j][0])**2+(l[i][1]-l[j][1])**2)**.5
s=s*f/n*2
s=s/f
print(s)
