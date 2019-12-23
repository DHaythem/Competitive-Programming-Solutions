#https://atcoder.jp/contests/abc127/tasks/abc127_b

r,d,x=map(int,input().split())
for i in range(10):
    print(x*r-d)
    x=x*r-d
