#https://atcoder.jp/contests/abc142/tasks/abc142_c

n=int(input())
l=list(map(int,input().split()))
t=[0]*n
i=1
for e in l:
    t[e-1]=str(i)
    i+=1
print(' '.join(t))
