#https://atcoder.jp/contests/abc131/tasks/abc131_b

n,l=map(int,input().split())
t=[]
p=[]
for i in range(n):
    t.append(l+i)
    if l+i>=0:
        p.append(l+i)
if p==[]:
    print(sum(t)-max(t))
else:
    print(sum(t)-min(p))
