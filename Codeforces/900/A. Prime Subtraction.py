#https://codeforces.com/contest/1238/problem/A

for _ in range(int(input())):
    x,y=map(int,input().split())
    if x-y==1:
        print('NO')
    else:
        print('YES')
