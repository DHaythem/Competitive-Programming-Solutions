#https://atcoder.jp/contests/abc144/tasks/abc144_a

a,b=map(int,input().split())
if a>9 or b>9:
  print(-1)
else:
  print(a*b)
