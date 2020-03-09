#https://codeforces.com/problemset/problem/1307/B

t=int(input())
for _ in range(t):
    n,x=map(int,input().split())
    l=list(map(int,input().split()))
    l.sort()
    if x in l:
        print(1)
    else:
        m=max(l)
        if m>x:
            print(2)
        else:
            if x%m==0:
                print(x//m)
            else:
                print(x//m+1)
