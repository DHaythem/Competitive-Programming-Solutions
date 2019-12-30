#https://atcoder.jp/contests/abc121/tasks/abc121_c

n,m=map(int,input().split())
l=[]
for _ in range(n):
    l.append(list(map(int,input().split())))
l.sort()
s=0
i=0
while m>0:
    s+=min(l[i][1],m)*l[i][0]
    m-=min(l[i][1],m)
    i+=1
print(s)
