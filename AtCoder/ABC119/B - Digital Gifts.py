#https://atcoder.jp/contests/abc119/tasks/abc119_b

n=int(input())
s=0
for _ in range(n):
    x,u=input().split()
    if u=='JPY':
        s+=float(x)
    else:
        s+=float(x)*380000
print(s)
