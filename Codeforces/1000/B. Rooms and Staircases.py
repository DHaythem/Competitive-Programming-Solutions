#https://codeforces.com/contest/1244/problem/B

t=int(input())
for _ in range(t):
    n=int(input())
    l=[*input()]
    if l==['0']*n:
        print(n)
    else:
        k=l.copy()
        k.reverse()
        a=l.index('1')
        b=k.index('1')
        print(max(n-a,n-b)*2)
