#https://atcoder.jp/contests/abc141/tasks/abc141_c

n,k,q=map(int,input().split())
l=[k-q]*n
for _ in range(q):
    a=int(input())
    l[a-1]+=1
for e in l:
    if e>0:
        print('Yes')
    else:
        print('No')
