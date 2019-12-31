#https://atcoder.jp/contests/abc117/tasks/abc117_b

n=int(input())
l=list(map(int,input().split()))
mx=max(l)
if sum(l)>2*mx:
    print('Yes')
else:
    print('No')
