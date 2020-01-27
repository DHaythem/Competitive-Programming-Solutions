#https://codeforces.com/contest/1294/problem/A

for _ in range(int(input())):
    a,b,c,n=map(int,input().split())
    if (a+b+c+n)%3==0:
        x=max(a,b,c)
        y=min(a,b,c)
        z=a+b+c-x-y
        if (n-x-x+y+z)>=0 and (n-x-x+y+z)%3==0:
            print('YES')
        else:
            print('NO')
    else:
        print('NO')
