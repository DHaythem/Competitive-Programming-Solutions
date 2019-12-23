#https://codeforces.com/problemset/problem/1076/C

q=int(input())
for _ in range(q):
    n=float(input())
    d=n**2-4*n
    if d>=0:
        x1=(-n-d**.5)/2
        x2=(-n+d**.5)/2
        print('Y ',"%.9f" % abs(x1),' ',"%.9f" % abs(x2))
    else:
        print('N')
