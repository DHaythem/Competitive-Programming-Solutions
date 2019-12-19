#https://atcoder.jp/contests/abc137/tasks/abc137_b

k,x=map(int,input().split())
a=[]
b=[]
for i in range(1,k):
    a.append(x-i)
    b.append(x+i)
a.reverse()
l=a+[x]+b
print(*(_ for _ in l))
