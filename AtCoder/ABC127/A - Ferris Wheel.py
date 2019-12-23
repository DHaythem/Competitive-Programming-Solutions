#https://atcoder.jp/contests/abc127/tasks/abc127_a

a,b=map(int,input().split())
if a<6:
    print(0)
elif a<13:
    print(b//2)
else:
    print(b)
