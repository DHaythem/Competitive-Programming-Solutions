#https://codeforces.com/problemset/problem/1321/A

n=int(input())
r=list(map(int,input().split()))
b=list(map(int,input().split()))
l=[0]*n
x=0
y=0
for i in range(n):
    if r[i]-b[i]==1:
        x+=1
    elif r[i]-b[i]==-1:
        y+=1
if x==0:
    print(-1)
else:
    print(y//x+min(y%x+1,1))
